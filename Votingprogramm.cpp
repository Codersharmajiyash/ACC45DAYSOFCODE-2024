#include<iostream>

//example code for voting 
intmain()

{

int age;

std::cout << "Enter your age:"; std::cin >> age;

if(age >=18) {

std::cout << "can vote!"; }

else if(age < 0)

std::cout << "you havent been born yet"; }

else{

std::cout << "cannot vote ";

}

return 0;
