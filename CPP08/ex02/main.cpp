#include "MutantStack.hpp"

int main()
{
    // Utilisation de MutantStack avec std::deque
    MutantStack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "MutantStack (std::deque): ";
    MutantStack<int>::iterator it;
    for (it = stack.begin(); it != stack.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Utilisation de std::list
    std::list<int> myList;
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);

    std::cout << "std::list: ";
    std::list<int>::iterator listIt;
    for (listIt = myList.begin(); listIt != myList.end(); ++listIt)
    {
        std::cout << *listIt << " ";
    }
    std::cout << std::endl;

    return 0;
}