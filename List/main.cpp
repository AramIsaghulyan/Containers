#include "List.hpp"

int main ()
{
    F_list::forward_list<int> ob;
    ob.push_front(15);
    ob.push_front(10);
    ob.push_front(25);
    ob.push_front(30);
    //ob.sort();
    //ob.reverse();
    //ob.insert(3,40);
    //ob.erase(3);
    ob.show();
    //std::cout << ob.empty();
}