#include "Stack.hpp"

int main ()
{
    Stack<int> ob;
    ob.push_back (5);
    ob.push_back (10);
    ob.push_back (51);
    std::cout << ob.minimum();
    //ob.empty();
    //std::cout << ob;
}