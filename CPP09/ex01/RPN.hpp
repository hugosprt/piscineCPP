#include <stack>
#include <string>

class RPNCalculator {
public:
    RPNCalculator();
	~RPNCalculator();
    void push(int num);

    void calculate(const std::string& operation);

    int getResult() const;

private:
    std::stack<int> stack_;
};
