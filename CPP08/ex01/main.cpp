#include "Span.hpp"


int main() {

    Span sp(6);  
   // Span sp = Span(5);
    sp.addNumber(6); 
    sp.addNumber(3); 
    sp.addNumber(17); 
    sp.addNumber(9); 
    sp.addNumber(11);
    // sp.addNumber(11);
    // sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    // for (int i = 0; i < 5; ++i) {
    //     sp.addNumber(i);
    // }
    // try {
    //     sp.addNumber(5);
    // } catch (const std::runtime_error& e) {
    //     std::cout << e.what() << '\n';
    // }
//     sp.print2();
//     sp.shortestSpan();
}