/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:26:18 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/28 14:36:57 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void){
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& var) {
	this->InputRecord.date = var.InputRecord.date;
	this->InputRecord.value = var.InputRecord.value;
	for (std::map<std::string, float>::const_iterator it = var._dataBase.begin(); it != var._dataBase.end(); ++it)
	{
		this->_dataBase[it->first] = it->second;
	}
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& var) {
	if (this != &var)
	{
		this->InputRecord.date = var.InputRecord.date;
		this->InputRecord.value = var.InputRecord.value;
		this->_dataBase.clear();
		for (std::map<std::string, float>::const_iterator it = var._dataBase.begin(); it != var._dataBase.end(); ++it)
		{
			this->_dataBase[it->first] = it->second;
		}
	}
		return *this;
}

void BitcoinExchange::fillDataMap(const std::string& filename) {
	std::ifstream file(filename);
	std::string line;

	if (!file.is_open()) {
		throw std::runtime_error("Error: could not open file.");
	}

	if (getline(file, line)) {
		if (line == "date,exchange_rate") {
			// Do nothing, just skip the header
		} else {
			// If the first line is not the expected header, consider it an error
			throw std::runtime_error("Error: unexpected file format.");
		}
	}
	while (getline(file, line)) {
		std::istringstream ss(line);
		std::string dateStr, priceStr;
		if (getline(ss, dateStr, ',') && getline(ss, priceStr)) {
			try {
				float price = std::stod(priceStr);
				//std::cout << "parseDate(dateStr)" << dateStr << std::endl;
				this->_dataBase[dateStr] = price;
			} catch (const std::exception& e) {
				std::cerr << "Error: invalid data => " << line << " (" << e.what() << ")" << std::endl;
			}
		}
	}

	file.close();
}

void BitcoinExchange::processInputFile(const std::string& inputFilename) {
	std::ifstream file(inputFilename);
	std::string line;

	if (!file.is_open()) {
		throw std::invalid_argument("could not open file.");
		return;
	}
	try {
		if (getline(file, line))
		{
			std::cout << line << std::endl;
			if (line == "date | value") {}
			else {
				throw std::invalid_argument("Error: unexpected file format.");
			}
		}
		else
			throw std::invalid_argument("File is empty.");
	}
	catch (std::invalid_argument& ia) {
		std::cerr << "Error: " << ia.what() << std::endl;
	}
	while (getline(file, line)) {
		std::istringstream ss(line);
		std::string dateStr, valueStr;
		if (getline(ss, dateStr, '|') && getline(ss, valueStr)) {
			try {
				// Remove any leading/trailing whitespace from parsed strings
				dateStr.erase(0, dateStr.find_first_not_of(" \t"));
				dateStr.erase(dateStr.find_last_not_of(" \t") + 1);
				valueStr.erase(0, valueStr.find_first_not_of(" \t"));
				valueStr.erase(valueStr.find_last_not_of(" \t") + 1);

				// Parse date components
				int year, month, day;
				if (sscanf(dateStr.c_str(), "%d-%d-%d", &year, &month, &day) != 3) {
					throw std::invalid_argument("Invalid date format.");
				}


				float value = std::stof(valueStr);
				std::ostringstream dateStream;
				dateStream << std::setfill('0') << std::setw(4) << year << "-"
						<< std::setw(2) << month << "-"
						<< std::setw(2) << day;
				std::string formattedDate = dateStream.str();
				try {
					checkDate(year, month, day);
					checkValue(value);
					// Format date as YYYY-MM-DD string
					float price = findTheDate(formattedDate);
					// Calculate result and print
					float result = price * value;
					std::cout << formattedDate << " => " << value << " = " << result << std::endl;
				}
				catch (std::invalid_argument& ia) {
					std::cerr << "Error: invalid argument =>" << ia.what() << std::endl;
				}
			} catch (const std::exception& e) {
				std::cerr << "Error: bad input => " << line << " (" << e.what() << ")" << std::endl;
			}
		} else {
			std::cerr << "Error: invalid format => " << line << std::endl;
		}
	}
	file.close();
}

float	BitcoinExchange::findTheDate(std::string formattedDate) {

	// Retrieve Bitcoin price for the date
	float price = 0;
	auto it = _dataBase.find(formattedDate);
	if (it != _dataBase.end()) {
		price = it->second;
	} else {
		// Find closest lower date if exact match not found
		auto lowerIt = _dataBase.lower_bound(formattedDate);
		if (lowerIt != _dataBase.begin()) {
			--lowerIt;
			price = lowerIt->second;
		}
	}
	return price;
}

bool BitcoinExchange::isLeapYear(int year) {
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return true;
			} else {
				return false;
			}
		} else {
			return true;
		}
	}
	return false;
}

void BitcoinExchange::checkDate(int year, int month, int day) {
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
		throw std::invalid_argument("Invalid date values.");
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
		if (day == 31)
			throw std::invalid_argument("Invalid date values.");
	if (month == 2)
	{
		if (isLeapYear(year) == false)
		{
			if (day > 28)
				throw std::invalid_argument("Invalid date values.");
			else if (day > 29)
				throw std::invalid_argument("Invalid date values.");
		}
	}
	
}

void BitcoinExchange::checkValue(float value) {
	if (value < 0) {
		throw std::invalid_argument("Value not a positive number.");
	}
	if (value > 1000)
		throw std::invalid_argument("Value too large a number.");
}