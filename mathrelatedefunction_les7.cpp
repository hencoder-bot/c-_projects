#include <iostream>

#include <cmath>

int main()
{
    double x=3;
    double y=4;
    double r=3.99;
    double z;
    double a;
    double e;
    double t;
    double w;
    double q;
    double s;
    double d;


    z = std::max(x,y);//-----maximum
    a= std::min(x,y);///-----------------mininmum
    e = std::pow(x,y);///-------powers
    t=sqrt(y);//------square roots
    w=abs(-3);//-----how far is the number from positive of itself
    q=round(r);//-----rounding off to the nearest whole number
    s=ceil(r);//----ceils the number
    d=floor(r);//rounds down 

    std::cout <<z<<'\n';
    std::cout<<a<<'\n';
    std::cout<<e<<'\n';
    std::cout<<t<<'\n';
    std::cout<<w<<'\n';
    std::cout<<q<<'\n';
    std::cout<<s<<'\n';
    std::cout<<d;


    



    return 0;
}