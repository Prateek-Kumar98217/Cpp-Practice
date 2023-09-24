#include <iostream>
int main(){

    int a{30};
    int b{47};
    int result{};

    std::cout<< "number 1 is: "<< a<< std::endl;
    std::cout<< "number 2 is: "<< b<< std::endl;

    result = (a>b)? a: b;
    std::cout<< "max is: "<<result<< std::endl;

    bool fast{true};
    int speed{fast? 300:150};

    std::cout<<"the speed is: "<< speed<< std::endl;

    return 0;
}