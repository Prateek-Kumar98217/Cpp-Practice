#include <iostream>
int main(){

    int a{};
    int *p_number{&a};
    p_number = new int;

    *p_number = 30;

    std::cout<<"the value in pointer is: "<< *p_number <<std::endl;
    std::cout<< "the address in the pointer: "<<p_number << std::endl;

    delete p_number;
    p_number = nullptr;
    // remember to release the pointers to nullptr after delete

    p_number = new int(80);
    // acn allote new memory to the pointer after release

    std::cout<< "value in the pointer: "<< *p_number<< std::endl;

    delete p_number;
    p_number = nullptr;

    return 0;
}