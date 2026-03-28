#include <iostream>
namespace first{
    int x = 1;
}
namespace second{
    int x=2;
}


int main()
{
    //PROGRAM TO CALCULATE THE CIRCUMFERENCE OFF A CIRCLE
    const double PI = 3.14156;
    double radius = 10;
    double circumference = 2 *PI*radius;
    const int LIGHT_SPEED = 2345424454;
    const int WIDTH = 10080;


    int x=0;

    using namespace first;
    using namespace second;



    std::cout<<circumference<<"cm"<<'\n';
    std::cout<<x<<'\n';
    std::cout<<first::x<<'\n';
    std::cout<<second::x<<'\n';
    std::cout<<first ::x<<'\n';
    std::cout<<second::x<<'\n';

    //-------NAMES SPACE-----
    //Namesspace = provides a solution for preventing name conflicts
    //in large projects each entity needs a unique name
    // a namespace allows for identically named entitied
    // as long as the names spaces are different


    //-----------CONST--------
    // the const keyword specifies that a variables value is constant
    //tells the
    return 0;
}

