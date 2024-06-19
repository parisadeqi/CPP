/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:57:07 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/19 11:22:31 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <vector>
#include <iomanip>
#include <ctime>

// time_t parseDate(const std::string& dateStr) {
// 	struct tm tm = {};
// 	strptime(dateStr.c_str(), "%Y-%m-%d", &tm);
// 	return mktime(&tm);
// }

// Function to read the Bitcoin price data from a CSV file
std::map<std::string, double> readBitcoinPrices(const std::string& filename) {
	std::map<std::string, double> bitcoinPrices;
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
				double price = std::stod(priceStr);
				//std::cout << "parseDate(dateStr)" << dateStr << std::endl;
				bitcoinPrices[dateStr] = price;
			} catch (const std::exception& e) {
				std::cerr << "Error: invalid data => " << line << " (" << e.what() << ")" << std::endl;
			}
		}
	}

	file.close();
	return bitcoinPrices;
}

int main(int argc, char* argv[]) {
	if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " <input file>" << std::endl;
		return 1;
	}

	try {
		auto bitcoinPrices = readBitcoinPrices("data.csv");
		// auto inputRecords = readInputFile(argv[1]);
		// processRecords(inputRecords, bitcoinPrices);
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}

	return 0;
}