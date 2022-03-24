#include "Queue.hpp"

int main ()
{
    Queue<int> ob;
    ob.push (5);
    ob.push (10);
    //ob.pop();
    //std::cout << ob.front ();
    //std::cout << ob;
    std::cout << ob.back();
}