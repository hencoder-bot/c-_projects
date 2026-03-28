#include <iostream>
// cout << (insertion operator
// cin >> (extraction operator)

int main()
{
    std::string name;
    int age;

    std::cout<<"whats your age?";
    std::cin>>age;


    std::cout <<"What is your name?";
    std::cin>>name;

    //if you want to insert both names like opio rogers...
    //std::cout <<"What is your full names name?: ";
    //std::getline(std::cin,name);




    std::cout <<"hello "<<name<<'\n';
    std::cout<<"Your are "<<age<<" years old";

    return 0;
}