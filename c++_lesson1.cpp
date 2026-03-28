#include <iostream>

using namespace std;
// using namespace std is to avoid overtyping like now we dont have to type std again

int main()
{
    std::cout << "I like pizza" << '\n';
    std::cout <<"its really good"<<'\n';
    //this is a comment

    int x=6;//declaration
    int y = 6;
    int sum = x + y;
    int prod = x * y;
    int sub = x - y;
    int div= x/y;
//integers
    int age=21;
    int year = 2023;
    int days = 7;


//double
    double price = 10.99;
    double gpa = 2.5;
    double temperature =25.1;

// single character
    char grade='A';
    char initial='B';
    char currency='$';

// boolean(true or false)
    bool student = false;
    bool power = true;



    std::cout <<x<<'\n';
    std::cout <<y<<'\n';
    std::cout<< sum <<'\n';
    std::cout<<prod<<'\n';
    std::cout<<sub<<'\n';
    std::cout<<div<<'\n';

    std::cout<<days<<'\n';
    std::cout<<price<<'\n';
    std::cout<<gpa<<'\n';
    std::cout<<temperature<<'\n';

    std::cout<<grade<<'\n';
    std::cout<<initial<<'\n';
    std::cout<<currency<<'\n';

    std::cout<<student<<'\n';
    std::cout<<power<<'\n';

    // string
    std::string name = "ROGERS";
    std::string day = "TEUSDAY";
    std::string food = "MALAKWANG";
    std::string address= "KAMPALA";
        string school="kampala university";//example of using namespace


    std::cout<<name<<'\n';
    std::cout<<day<<'\n';
    std::cout<<food<<'\n';
    std::cout<<address<<'\n';
    cout<<school<<'\n';//example of using namespace


// how to print string plus data types
    std::cout<<"hello "<< name<<'\n';
    std::cout<<"you are "<< age <<" years old"<<'\n';
    std::cout<<"I like eating "<< food<<" its my best meal";

    return 0;
}


