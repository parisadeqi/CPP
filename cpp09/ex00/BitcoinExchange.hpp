/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:56:35 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/19 14:24:59 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <vector>
#include <iomanip>
#include <ctime>

class BitcoinExchange {
	public:
		BitcoinExchange(const std::string& dataFileName);
		BitcoinExchange(const BitcoinExchange& var);
		~BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange& var);

		void	fillDataMap(const std::string& fileName);
		void	processInputFile(const std::string& inputsFileName);
		void	checkValue(double value);
		void	checkDate(int year, int month, int day);
		bool	isLeapYear(int year);


	private:
		std::map<std::string, double>	_dataBase;
		struct {
			std::string date;
			double value;
		} InputRecord;
};

#endif