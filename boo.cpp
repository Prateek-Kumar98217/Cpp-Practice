#include <iostream>
#include<iomanip>
int main(){

    bool red{true};
    bool green{true};
    if (red == true){
        std::cout<< "Bruh stop!"<< std::endl;
    }else{
        std::cout<< "Go forward"<< std::endl;
    }
    if (green){
        std::cout<< "Go forward"<< std::endl;
    }else{
        std::cout<< "Bruh stop!"<< std::endl;
    }
    std::cout<< std::boolalpha;
    std::cout<< red;
    std::cout<<green;
}