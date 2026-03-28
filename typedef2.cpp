//instead of using typedef ...we can also use "using" as below
#include <iostream>
#include <vector>

using text_t=std::string;///-----instead of (typedef std::string text_t;)
using number_t=int;//------instead of(typedef int number_t;)
int main(){
    text_t first_name="OPROHEN";
    number_t age=32;
    

    std::cout<<first_name<<'\n';
    std::cout<<age<<'\n';


    return 0;


}

