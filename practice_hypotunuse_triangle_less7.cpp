#include <iostream>
#include <cmath>


int main()
{
    double a;
    double b;
    double c;

    std::cout<<"Enter side A: ";
    std::cin>>a;

    std::cout<<"Enter side B: ";
    std::cin>>b;

    

    a=pow(a , 2);//(a, 2) mean a to power 2
    b=pow(b,2);//(b,2) meaning b to power 2
    //or to avoid the above statements ...
    ////---c = sqrt(pow(a,2)+pow(b,2))
    c=sqrt(a+b);

    std::cout<<"Side C: "<<c;






    return 0;
}