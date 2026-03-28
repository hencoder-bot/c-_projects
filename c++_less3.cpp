#include <iostream>
#include <vector>
//to add a data type
//typedef std::vector<std::pair<std::string, int>>paisrlist_t;
//typedef for std string
typedef std::string text_t;
typedef int number_t;
int main(){
    //TYPEDEF
   // paisrlist_t paisrlist;

   text_t firstname="OPIO";//typedef example for string
   number_t age= 21;//typedef example for int





   std::cout<<firstname<<'\n';
   std::cout<<age<<'\n';


    //typedef
    //is reserved keyword used to create an additional name
    //(alias) for another data type
    //new identifier for an existing type
    //helps with readability and reduces typos
    //use when there is a clear benefit
    //replaced with "using" ()work better w/ templates----next @c++_less3_typedef/using.cpp
    return 0;
}
