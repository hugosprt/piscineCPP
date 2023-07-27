#include <vector>
#include <list>
#include <string>

class PmergeMe {
public:
    PmergeMe();
    ~PmergeMe();

    void read(const std::string& str);
    void sortAndPrint();

private:
    std::vector<int> vec_;
    std::list<int> list_;

    void sortAndPrintVector(std::vector<int>& vec, const std::string& name);
    void sortAndPrintList(std::list<int>& list, const std::string& name);
};
