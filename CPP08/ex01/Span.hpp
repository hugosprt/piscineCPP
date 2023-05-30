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
    int shortestSpan();
    int longestSpan();
    void addRange(const int start, const int end);
private:
    std::vector<int> data;
    size_t max_size;
};