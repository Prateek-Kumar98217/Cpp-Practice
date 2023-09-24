#include <iostream>
#include <limits>
int main(){

    std::cout<< "min value of int: "<<std::numeric_limits<int>::min()<< std::endl;
    std::cout<< "max value of int: "<<std::numeric_limits<int>::max()<< std::endl;
    std::cout<< "min value of float: "<<std::numeric_limits<float>::min()<< std::endl;
    std::cout<< "max value of int: "<<std::numeric_limits<float>::max()<< std::endl;
    std::cout<< "min value of double: "<<std::numeric_limits<double>::min()<< std::endl;
    std::cout<< "max value of double : "<<std::numeric_limits<int>::max()<< std::endl;
}