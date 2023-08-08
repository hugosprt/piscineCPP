#include <vector>
#include <list>
#include <string>

class PmergeMe {
public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe( const PmergeMe &toCopy );
	PmergeMe &operator=( const PmergeMe &toTheRight );
    void read(const std::string& str);
	void fordJohnsonSort(std::vector<int> &vec);
	void fordJohnsonSort2(std::list<int> &lst);
	void sortAndPrint();

private:
    std::vector<int> vec_;
    std::list<int> list_;

    void sortAndPrintVector(std::vector<int>& vec, const std::string& name);
    void sortAndPrintList(std::list<int>& list, const std::string& name);
};
