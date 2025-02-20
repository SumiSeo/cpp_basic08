#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    std::cout << mstack.top() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "RESULT: "<<*it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);


    std::cout << "************************" << std::endl;

    std::list<int> lis;
    lis.push_back(5);
    lis.push_back(17);
    std::cout << lis.back() << std::endl;
    lis.pop_back();
    std::cout << lis.size() << std::endl;
    std::cout << lis.back() << std::endl;

    lis.push_back(3);
    lis.push_back(5);
    lis.push_back(737);
    //[...]
    lis.push_back(0);

    std::list<int>::iterator it_lis = lis.begin();
    std::list<int>::iterator ite_lis = lis.end();

    ++it_lis;
    --it_lis;
    while (it_lis != ite_lis)
    {
        std::cout << "RESULT: "<<*it_lis << std::endl;
        ++it_lis;
    }
    std::list<int> slist(lis);
    return 0;

};