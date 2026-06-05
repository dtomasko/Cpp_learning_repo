//Write a program that demonstrates integer overflow by adding 1 to the maximum value of an `int` (use `INT_MAX` from `<climits>`).


#include<iostream>
#include <climits>
int main(){

int x=INT_MAX;

std::cout<<"Max int num: "<<x<<std::endl;
std::cout<<"Max int num +1: "<<x+1<<std::endl;


    return 0;
}