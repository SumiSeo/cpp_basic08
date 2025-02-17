#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>
#include <algorithm>    

int main()
{   
   
    std::vector<int> intVector;
    std::list<int> intList;
    for(int i = 0; i < 10; i ++)
    {
        intVector.push_back(i);
        intList.push_back(i);
    }

    std::vector<int>::iterator it = std::find(intVector.begin(), intVector.end(), 3);
    if (it != intVector.end()) 
        std::cout << "Vector Value found: " << *it << std::endl;
    else  
        std::cout << "Vector Value not found." << std::endl;

    int found = ::easyFind(intList, 9);
    if (found > 0)
        std::cout << "List Value found: " << found << std::endl;
    else  
        std::cout << "List Value not found." << std::endl;
 

}