#include "iter.hpp"

size_t plus1(size_t & index){
	
	std::cout << index + 1 << std::endl;
	index++;
	return index;
}

int main()
{
	size_t tableau[5] = {1, 2, 3, 4, 5};
	size_t t = 5;
	
	iter(tableau, t, &plus1);

}