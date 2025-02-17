#ifndef EASYFIND__TPP
#define EASYFIND__TPP

template <typename T>
int easyFind(T& container, int n)
{
    typename T::iterator iter;
    iter = std::find(container.begin(), container.end(), n);
    int found = *iter;
    if(iter == container.end())
        return -1;
    return found;
}


#endif