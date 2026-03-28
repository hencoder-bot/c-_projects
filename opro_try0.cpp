#include <iostream>
 int main()
 {
    std::string names;
    std::string university;
    std::string pri_school;
    std::string sec_school;
    std::string nur_school;


    std::cout<<"what are your full names ";
    std::getline(std::cin, names);

    std::cout<<"What is the name of your UNIVERSITY ";
    std::getline(std::cin,university);

    std::cout<<"what primary school did you go to ";
    std::getline(std::cin,pri_school);

    std::cout<<"what secondary school did you go to ";
    std::getline(std::cin,sec_school);

    std::cout<<"which nursary school did you go to ";
    std::getline(std::cin,nur_school);


    std::cout<<"your name is  "<<names<<'\n';
    std::cout<<'\n';
    std::cout<<"your university is "<<university<<'\n';
    std::cout<<'\n';
    std::cout<<"your primary school was "<<pri_school<<'\n';
    std::cout<<'\n';
    std::cout<<"your secondary school was "<<sec_school<<'\n';
    std::cout<<'\n';
    std::cout<<"your nursary school was "<<nur_school;



    return 0;
 }