//Create variables of type `short`, `int`, `long`, `long long`, and print their sizes using `sizeof`.


#include<iostream>

int main(){

short x=2.2;
int y=2;
long z = 333333L;
long long w=222222LL;

std::cout<<"Size of short: "<<sizeof(x)<<" bytes"<<std::endl;
std::cout<<"Size of int: "<<sizeof(y)<<" bytes"<<std::endl;
std::cout<<"Size of long: "<<sizeof(z)<<" bytes"<<std::endl;
std::cout<<"Size of long long: "<<sizeof(w)<<" bytes"<<std::endl;

    return 0;
}