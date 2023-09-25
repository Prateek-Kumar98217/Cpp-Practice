#include <iostream>
int main(){

    int array[5];

    for (int i; i < std::size(array); ++i){

        std::cout<< "Enter the array element: ";
        std::cin>> array[i];
        std::cout<< std::endl;

    }
    std::cout<< "the entered array elements are:"<< std::endl;

    for (auto i: array){

        std::cout<< i << std::endl;
    }

    return 0;
}