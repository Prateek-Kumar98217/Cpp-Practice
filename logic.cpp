#include <iostream>
int main(){

    int a{20};
    int b{25};
    int c{22};
    int d{14};
    int e{60};
    std::cout<< std::boolalpha;
    std::cout<< "(a>b)&&(c>d): "<<((a>b)&&(c>d))<< std::endl;
    std::cout<< "(a>b)||(c>d): "<<((a>b)||(c>d))<< std::endl;
    std::cout<< "(a<b)&&(c<d): "<<((a<b)&&(c<d))<< std::endl;
    std::cout<< "(a<b)||(c<d): "<<((a<b)||(c<d))<< std::endl;


}