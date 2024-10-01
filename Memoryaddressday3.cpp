#include<iostream>

//Memory addresss tell us about where
//the data is stored in memory  
// can be accessed by &

int main()
{
    std::string name = "harsh";
    int age = 21;
    bool student = true;
    std::cout << &name <<'\n';    
    std::cout << &age <<'\n'; 
    std::cout << &student<<'\n'; 
}
