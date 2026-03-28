//TYPE CONVERSION
// type conversion = conversion a value of one data type to another
//implicit=automatic
//explicit =precede value with new data type
#include <iostream>
using namespace std;

int main()
{
    double x=3.14;
    double y=(int) 5.56;//explicit

    //example
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions *100;


    std::cout<<x<<'\n';
    cout<<y<<'\n';
    cout<<score<<'%';

    return 0;
}