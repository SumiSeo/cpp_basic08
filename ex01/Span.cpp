#include "Span.hpp"
#include <list>
#include <iostream>
#include <stdexcept>
#include <cstdlib> 

Span::Span() : n(0)
{
};

Span::Span(unsigned int range) : n(range)
{
};

Span::Span(const Span &original)
{
    if(this != &original)
        this->n = original.n;
};

Span &Span::operator=(const Span &original)
{
     if(this != &original)
        this->n = original.n;
    return *this;
};

Span::~Span()
{
    //destructor
};


void Span::addNumber(int value)
{
    if(v.size() >= n)
        throw std::runtime_error("It is alreay full !");
    else
        v.push_back(value);

};

int Span::shortestSpan()
{
    int size = v.size();
    if(size < 2)
        throw std::runtime_error("Not enough to get distance");
    int min = v.front();
    for(int i = 0 ; i < size -1 ; i++)
    {
        int cur = v[i];
        int next = v[i+1];
        int distance = abs(cur - next);
        if(distance < min)
            min  = distance;
    }
    return min;
};

int Span::longestSpan()
{
    int size = v.size();
    if(size < 2)
        throw std::runtime_error("Not enough to get distance");
    int max = v.front();
    for(int i = 0 ; i < size -1 ; i++)
    {
        int cur = v[i];
        int next = v[i+1];
        int distance = abs(cur - next);
        if(distance > max)
            max = distance;
    }
    return max;
};

