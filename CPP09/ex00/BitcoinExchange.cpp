#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <sstream>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange( const BitcoinExchange &toCopy ) {
	
	*this = toCopy;
	return;
}

BitcoinExchange &BitcoinExchange::operator=( const BitcoinExchange &toTheRight ) {
	
    if (this == &toTheRight) {
        return *this;
    }
	this->db = toTheRight.db;
    return *this;
}



void BitcoinExchange::loadDatabase(const std::string& filename) {
    std::ifstream file(filename.c_str());
    if (!file) {
        std::cerr << "data base corrupt" << filename << std::endl;
        return;
    }

    std::string line;
    getline(file, line); 
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string date;
        std::string separator;
        double value;
        if (!(ss >> date >> separator >> value)) {
            std::cerr << "Error: bad input => " << line << std::endl;
        } else {
            db[date] = value;
        }
    }
}


bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    } else if (year % 100 != 0) {
        return true;
    } else if (year % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

bool isValidDay(int year, int month, int day) {
    if (month == 2) {
        if (isLeapYear(year)) {
            return day <= 29;
        } else {
            return day <= 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return day <= 30;
    } else {
        return day <= 31;
    }
}

bool isValidDateFormat(const std::string& date) {
    if (date.length() != 10)
        return false;

    std::stringstream ss(date);
    int year, month, day;
    char separator1, separator2;

    ss >> year >> separator1 >> month >> separator2 >> day;

    if (ss.fail() || separator1 != '-' || separator2 != '-')
        return false;

    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
        return false;

    return isValidDay(year, month, day);
}


void BitcoinExchange::processInputFile(const std::string& filename) {
    std::ifstream file(filename.c_str());

        if (!file) {
            std::cerr << "Error: could not open file: " << filename << std::endl;
            return;
        }
        std::string line;
        std::getline(file, line);
        if (line != "date | value")
            std::cerr << "caca l'entete" << std::endl;
        while (std::getline(file, line)) {
            std::istringstream ss(line);
            std::string date;
            std::string separator;
            if (!(ss >> date >> separator)) {
                std::cerr << "Error: invalid input format in the line: " << line << std::endl;
                continue;
            }
            if ( !isValidDateFormat(date))
            {
                std::cerr << "Error: invalid date " << line << std::endl;
                continue;
            }
            double value;
            if (!(ss >> value)) {
                std::cerr << "Error: value is missing in the line: " << line << std::endl;
                continue;
            }
            if (value < 0) {
                std::cerr << "Error: not a positive number." << std::endl;
                continue;
            }
            if (value > 1000) {
                std::cerr << "Error: too large a number." << std::endl;
                continue;
            }
            std::map<std::string, double>::iterator it = db.find(date);
            if (it == db.end()) {
                std::map<std::string, double>::iterator closest_it = db.end();
                for (it = db.begin(); it != db.end(); ++it) {
                    if (it->first > date) break;
                    closest_it = it;
                }

                if (closest_it == db.end()) {
                    std::cerr << "Error: no valid date in database => " << date << std::endl;
                } else {
                    std::cout << date << " => " << value << " = " << closest_it->second * value << std::endl;
                }
            } else {
                std::cout << date << " => " << value << " = " << it->second * value << std::endl;
            }
        }
    }

BitcoinExchange::~BitcoinExchange()
{
} 

