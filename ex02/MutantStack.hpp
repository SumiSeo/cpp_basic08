#ifndef MUTANTSTACK__HPP
#define MUTANTSTACK__HPP

# include <stack>
# include <iostream>
# include "MutantStack.tpp"

//push pop top size empty  swap
// additional member functions; iterator
template <typename T>
class MutantStack  : public std::stack<T>
{   

    public : 
        MutantStack() 
        {
            std::cout << "dfault constrcutor" << std::endl;
        };
        MutantStack(T& container);
        MutantStack(MutantStack const &original)
        {
            if(this != &original)
                this->n = original.n;
        };
        MutantStack &operator=(MutantStack const &original)
        {
            if(this != &original)
                this->n = original.n;
            return *this;
        };
        ~MutantStack()
        {
            //destructor
        };

        typedef typename MutantStack<T>::stack::container_type::iterator iterator;
        iterator begin()
        {
            return this->c.begin();
        };

        iterator end()
        {
            return this->c.end();
        };
        
};

#endif

