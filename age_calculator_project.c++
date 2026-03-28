#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int year_of_birth;
    int current_year;
    int age;
    string name;
    string hospital;

    cout<<"WELCOME TO THE AGE TELLER PROJECT<<'\n'";

    cout<<"Please enter your full names: ";
    getline(cin,name);

    cout<<"Which hospital where you born in: ";
    getline(cin,hospital);

    cout<<"Enter the year you where born: ";
    cin>>year_of_birth;

    cout<<"Enter the current year now: ";
    cin>>current_year;


    age=(current_year-year_of_birth);

    cout<<name<<" YOUR Are "<<age<<" YEARS OLD \n You where born in "<<hospital;







   return 0; 
}
