# include <iostream>
int main(){

    int *p_number{nullptr}; 
    // can only store address of of int variables

    int var{960};
    p_number = &var;

    std::cout<< "the variable value: "<< *p_number<< std::endl;
    // this is called derefferencing the pointer
    std::cout<< "address of the variable: "<< p_number<< std::endl;

    const char *p_message{"hello world"};
    std::cout<< "the pointer points to: "<< *p_message <<std::endl;
    std::cout<< "the pointer stores: "<< p_message <<std::endl;

    char array1[]{"hello world"};
    char a{};
    std::cout<<"the present string is: "<<array1 <<std::endl;
    std::cout<< "enter the new starting alphabet: "<< std::endl;
    std::cin>> a;
    array1[0] = a;
    std::cout<< "new string is:"<<array1 <<std::endl;

    return 0;
}