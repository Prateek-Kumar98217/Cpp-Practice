#include <iostream>
#include <iomanip>
int main(){
    long long int num1{-300};
    signed short int num2{-300};
    std::cout<< num1<< num2<< std::endl;
    std::cout<< sizeof(num1)<< std::endl;
    std::cout<< sizeof(num2)<< std::endl;
    float num3{8.73488583659};
    double num4{8.3685937257483485e-3};
    long double num5{7.93684947465904e7};
    std::cout<< std::setprecision(20);
    std::cout<< sizeof(num3)<< std::endl;
    std::cout<< sizeof(num4)<< std::endl;
    std::cout<< sizeof(num5)<< std::endl;
    std::cout<< num3<< std::endl;
    std::cout<< num4<< std::endl;
    std::cout<< num5<< std::endl;
    return 0;
}