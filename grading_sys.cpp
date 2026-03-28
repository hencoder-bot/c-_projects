#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout<<"Enter your marks ";
    cin>>marks;


    if (marks>=85){
        cout<<"A"<<'\n';
    }

    else if (marks>=70){
    cout<<"B"<<'\n';
    }

    else if (marks>=60){
        cout<<"C"<<'\n';
    }

    else if (marks>=40){
        cout<<"P"<<'\n';
    }

    else if (marks>=39){
        cout<<"F"<<'\n';
    }

    else {
        cout<<"you failed";
    }


    return 0;
}