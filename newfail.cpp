#include <iostream>
int main(){
    /*
    for (size_t i{}; i< 1000000000; ++i){
        try{
            int *overload = new int[100000000000000];
        }catch(std::exception& ex){
            std::cout<<"error"<< std::endl;
            break;
        }
    }
    */
    for (size_t i{}; i< 100; ++i){

        int *overload = new int[10000000000];

        if (overload != nullptr){
            std::cout<< "data allocated"<< std::endl;
        }else{
            std::cout<<"data allocation failed"<< std::endl;
        }
        
    }
    std::cout<<"program end"<< std::endl;
    return 0;
}