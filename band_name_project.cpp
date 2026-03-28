#include <iostream>
using namespace std;

int main()
{
    string name;
    string city;

    cout<<"WELCOME TO THE BAND NAME PROJECT"<<'\n';

    cout<<"What is your favourite pet: ";
    getline(cin,name);

    cout<<"What is the name of your city: ";
    getline(cin,city);

    


    cout<<"The name of your band will be "<<name + city<<" band";





    return 0;
}