#include <iostream>
int main(){

    int number1{45};
    int number2{50};

    std::cout<< number1<< std::endl;
    std::cout<< number2<< std::endl;

    std::cout<< "Comparing the above numbers"<< std::endl;
    std::cout<< std::boolalpha;

    std::cout<< "number1 < number2: "<<(number1 < number2) << std::endl;
    std::cout<< "number1 > number2: "<<(number1 > number2) << std::endl;
    std::cout<< "number1 = number2: "<<(number1 == number2) << std::endl;
    std::cout<< "number1 not equal to number2: "<<(number1 != number2) << std::endl;

    return 0;
    }