#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <stack>
#include <list>
#include <cstdlib>

template < typename T >
class MutantStack : public std::stack<T> {
	
    public:

        MutantStack( void ) : std::stack<T>() {
			
			return;
		};

		MutantStack( const MutantStack<T> & to_copy ) : std::stack<T>( to_copy ) {
            
			*this = to_copy;
			return;
        };
		
		MutantStack & operator=(const MutantStack<T>  & toCopy ) {
            
			if ( *this == toCopy )
				return ( *this );
				
			this->c = toCopy.c;
			return ( *this );
        };
		
        ~MutantStack( void ) {

			return;
		};
        
        typedef typename  std::deque<T>::iterator iterator;
		
        iterator	begin() {
			
            return ( this->c.begin() );
        }
		
        iterator	end() {
			
            return ( this->c.end() );
        }
};

#endif