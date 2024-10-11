include<iostream>
int main(){

default:

std::cout << "Please enter only in a letter grade (A-F);


char calc;

double num1;

double num2;

double result;

std::cout <<"calculator";

std::cout<< "Enter either (+-*/):"; std::cin >> calc;

std::cout << "Enter first number"; std::cin >> num1;

std::cout << "Enter second number";

std::cin >> num2;

switch(calc) {

case'+':

result = num1+ num2

std::cout << "result" << '\n';

break;



case'-':
  
result = num1- num2

std::cout << "result" << '\n';

break;

case'*':

result = num1 * num2

std::cout << result << '\n';

break;

case'/':

result = num1/num2

std::cout << result << '\n';

break;

default:

std::cout << "the number you entered is not valid\n";

break;

}

std::cout << "********************",

return 0;

}
