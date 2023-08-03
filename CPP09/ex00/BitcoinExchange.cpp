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
        std::cerr << "Error: could not open file: " << filename << std::endl;
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

void BitcoinExchange::processInputFile(const std::string& filename) {
    std::ifstream file(filename.c_str());

    if (!file) {
        std::cerr << "Error: could not open file: " << filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string date;
        std::string separator;
        double value;
        while (ss >> date >> separator >> value) {
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
}
BitcoinExchange::~BitcoinExchange()
{
} 

