//Ask the user to enter an integer and a double. Store them in variables and print their sum, difference, product, and quotient.
#include <iostream>

int main(){
int x;
double y;

std::cout<<"Enter int: "<<std::endl;
std::cin>>x;
std::cout<<"Enter dbl: "<<std::endl;
std::cin>>y;
std::cout<<"Sum: "<<x+y<<std::endl;
std::cout<<"Diffrence: "<<x-y<<std::endl;
std::cout<<"Product: "<<x*y<<std::endl;
std::cout<<"quotient: "<<x/y<<std::endl;

    return 0;
}