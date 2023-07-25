#ifndef BITCOIN_EXCHANGE_H
#define BITCOIN_EXCHANGE_H

#include <map>
#include <string>

class BitcoinExchange {
public:
    BitcoinExchange();
    void loadDatabase(const std::string& filename);
    void processInputFile(const std::string& filename);

private:
    std::map<std::string, double> db;
};

#endif // BITCOIN_EXCHANGE_H
