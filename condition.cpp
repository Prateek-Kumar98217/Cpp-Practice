#include <iostream>
int main(){
    int num1{98};
    int num2{57};

    bool result = (num1 < num2);
    std::cout<< std::boolalpha<< std::endl;
    std::cout<< "resut is :"<< result<< std::endl;

    if (result){

        std::cout<< "Number 1 is less than Number 2"<< std::endl;

    }else{

        std::cout<< "Number 1 is greater than Number 2 "<< std::endl;
    }

    return 0;
}
