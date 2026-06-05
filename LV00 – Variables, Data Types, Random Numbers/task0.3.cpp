//Write a program that generates a random integer between 1 and 100 and prints it. Use `rand()` and `srand(time(0))`.

#include<iostream>
int main (){


srand(time(0));

int random=rand()%100 + 1; // formula for [a,b] a+rand()%(b-a+1)
std::cout<<"Radnom num: "<<random<<std::endl;


    return 0;
}