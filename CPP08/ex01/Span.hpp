#include <iostream>
#include <list>
#include <stdexcept>

#include <vector>
#include <stdexcept>

class Span {
public:
  Span();
    Span(size_t maxSize);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();

    void addNumber(int value);
    void print2() const;
private:
    std::vector<int> data;
    size_t max_size;
};