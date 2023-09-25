#include <iostream>
size_t a{5};
int main(){

    for (size_t i{}; i < a; ++i){

        std::cout<< "Loops demonstration! "<< i<< std::endl;
    }

    size_t b{10};
    size_t i{5};

    while (i < b){

        std::cout<< "while demo "<<i << std::endl;
        ++i;
    }

    unsigned int NUMBER{10};
    unsigned int j{5};

    do{

        std::cout<< "I am learning C++ "<<j << std::endl;
        ++j;
    }while(j < NUMBER);

    return 0;
}