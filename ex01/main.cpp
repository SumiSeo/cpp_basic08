#include <iostream>
#include "Span.hpp"
#include <ctime>
#include <cstdlib>

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        // sp.addNumber(101);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        Span largeSpan(10000);
        std::srand(std::clock()); 

        for (int i = 0; i < 10000; i++) 
        {
            largeSpan.addNumber(std::rand() % 10000); 
        }

        std::cout << "Shortest Span : " << largeSpan.shortestSpan() << std::endl;
        std::cout << "Longest Span : " << largeSpan.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}