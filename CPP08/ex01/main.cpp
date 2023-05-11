#include "Span.hpp"


int main() {
    Span sp(5);  

    for (int i = 0; i < 5; ++i) {
        sp.addNumber(i);
    }
    try {
        sp.addNumber(5);
    } catch (const std::runtime_error& e) {
        std::cout << e.what() << '\n';

}
sp.print2();

}