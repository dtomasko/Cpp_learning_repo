//Declare a constant double`PI` with value 3.14159. Calculate the area of a circle given radius entered by the user.

#include<iostream>

int main(){

const double PI =3.14159;
int radius;
std::cout<<"Enter the radius: ";
std::cin>>radius;
std::cout<<"Area: "<<2*PI*radius<<std::endl;
    return 0;
}