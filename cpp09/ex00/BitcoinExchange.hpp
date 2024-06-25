/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:56:35 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/25 11:49:40 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <iomanip>
#include <ctime>

class BitcoinExchange {
	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange& var);
		~BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange& var);

		void	fillDataMap(const std::string& fileName);
		void	processInputFile(const std::string& inputsFileName);
		float	findTheDate(std::string formattedDate);
		void	checkValue(float value);
		void	checkDate(int year, int month, int day);
		bool	isLeapYear(int year);


	private:
		std::map<std::string, float>	_dataBase;
		struct {
			std::string date;
			float value;
		} InputRecord;
};

#endif