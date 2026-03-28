#include <iostream>

int main()
{
    //arithmetic operators = return the  result of a specific 
    //             arithmic operators (+,-,*,/)
    int students= 20;
    students+=1;
    students++;//to add to the students....no need for reprinting out put

    //SUBTRACTION
    students=students - 2;
    //or
    students-=2;
    students--;
    //OR
    int people=30;
    people+=1;
    people++;//---to add to the people
    
    //MULTIPLICATION
    int cows=40;
    cows=cows*2;
    //or
    cows*=2;


    //subtraction
    int girls=20;
    girls=girls / 2;
    //or
    girls/=2;

    //%
    int apples=30;
    
    int remainder=apples % 2;


    

    
    

    



    std::cout<<students<<'\n';
    std::cout<<people<<'\n';
    std::cout<<cows<<'\n';
    std::cout<<girls<<'\n';
    std::cout<<remainder;
    return 0;
}