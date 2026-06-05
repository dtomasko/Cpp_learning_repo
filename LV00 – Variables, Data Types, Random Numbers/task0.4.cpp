//Generate a random floating-point numbers between 0.0 and 1.0 using `rand()` and print them with 3 decimal places.

#include<iostream>
#include <iomanip>

int main(){


srand(time(0));
float random=(float)rand()/RAND_MAX; //RAND_MAX returns 0<=RAND_MAX<=1
std::cout << std::fixed << std::setprecision(3) << random << std::endl;

    return 0;
}