#include <iostream>
int main(){

    int value{30};
    int& bruh{value};

    std::cout<< "the element stored in variable: "<< value<< std::endl;
    std::cout<< "the element in the reference: "<< bruh<< std::endl;

    std::cout<< "variable adress: "<< &value<< std::endl;

    std::cout<< "enter a new value: "<< std::endl;
    std::cin>> value;

    std::cout<< "the element stored in variable: "<< value<< std::endl;
    std::cout<< "the element in the reference: "<< bruh<< std::endl;

    std::cout<< "reference address: "<< &bruh<< std::endl;

    std::cout<< "enter a new value: "<< std::endl;
    std::cin>> bruh;

    std::cout<< "the element stored in variable: "<< value<< std::endl;
    std::cout<< "the element in the reference: "<< bruh<< std::endl;
    
    return 0;
}