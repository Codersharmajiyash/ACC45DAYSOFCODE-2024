//SIZE OF OPERATOR
//It determines the size in bytes of data typesand
//variables,class,objects etc.
#include <iostream>
int main()
{
std::string name = "yash sharma";
double cgpa = 2.5;
char grade = 'F';
bool student = true;
std::cout << sizeof(name) << "bytes\n";
std::cout << sizeof(grade) << "bytes\n";
std::cout << sizeof(student) << "bytes\n";
}
return 0;
