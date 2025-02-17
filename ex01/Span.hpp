#ifndef SPAN__HPP
#define SPAN__HPP

#include <vector>

class Span
{   
    private :
        unsigned int n;
        std::vector<int> v;
     

    public:
        Span();
        Span(unsigned int range);
        Span(const Span &original);
        Span &operator=(const Span &original);
        void addNumber(int value);
        int shortestSpan();
        int longestSpan();
        ~Span();
        
};

#endif