#include <stack>
#include <string>

class RPNCalculator {
public:
    RPNCalculator();
	~RPNCalculator();
    RPNCalculator( const RPNCalculator &toCopy);
	RPNCalculator& operator=( const RPNCalculator &toTheRight );
    void push(int num);

    void calculate(const std::string& operation);

    int getResult() const;

private:
    std::stack<int> stack_;
};
