#include <iostream>
using namespace std;//meaning u dont have to type std:: where you where suppossed to start with std::


int main()
{

    string SAVIOUR;
    int phone_number;
    string city;
    string school;
    int year;
    string president;
    string book;
    string science;
    

    cout<<"who is the saviour of the world?; ";
    std::cin>>SAVIOUR;//this is the character input it allows a user to insert strings, int,floats or double 

    cout<<"please insert your cell number: ";
    cin>>phone_number;

    cout<<"what is the name of your city?: ";
    cin>>city;

    cout<<"whiach school did you go to?: ";
    cin>>school;
    cout<<"Which year uganda get its independence? ";
    cin>>year;

    cout<<"who was the first president by then? ";
    cin>>president;

    cout<<"which book can we find this article? ";
    cin>>book;

    cout<<"under which category of topic can we find this kind of imformation? ";
    cin>>science;




    cout<<"so did you say "<<SAVIOUR<<" is the saviour of the world"<<'\n';
    cout<<"your phone number is "<<phone_number<<'\n';
    cout<<"your city is a beautifull place called: "<<city<<" kapital city"<<'\n';
    cout<<"and your school is called "<<school<<" university"<<'\n';

    cout<<"Uganda got its independence in "<<year<<'\n';
    cout<<'\n';
    cout<<"The president was "<<president<<" by then"<<'\n';
    cout<<"WE can find this kind of imformation in "<<book<< " books"<<'\n';
    cout<<"the category of this imformation is from "<<science<<" science";




    return 0;

}