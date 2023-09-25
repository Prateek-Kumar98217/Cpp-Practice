#include <iostream>

int main(){

    char array[5];
    array[0] = 'h';
    array[1] = 'e';
    array[2] = 'l';
    array[3] = 'l';
    array[4] = 'o';

    std::cout<< array<< std::endl;

    std::cout<< "array data complete"<< std::endl;

    double array1[]{12.8, 3.8, 9.7, 10.2, 7.5, 8.0, 8.4, 4.9};

    std::cout<< "size of array 2: "<< std::size(array1)<<std::endl;

    for (auto i : array1){

        std::cout<< "new array 2 item is: "<<i << std::endl;

    }

    std::cout<< "array 2 data complete"<< std::endl;

    return 0;
}