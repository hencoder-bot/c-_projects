#include <iostream>
// cout << (insertion operator
// cin >> (extraction operator)

int main()
{
    std::string name;
    int age;


    std::cout <<"What ia your fullnames?: ";
    std::getline(std::cin >>std::ws,name);//avoids space defaults

    std::cout <<"Whats your age?: ";
    std::cin >>age;

    std::cout <<"hello "<<name<<'\n';
    std::cout<<"Your are "<<age<<" 23years old";
    return 0;
}   