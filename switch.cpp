#include <iostream>
const int pen{10};
const int eraser{20};
const int marker{30};

int main(){
    int tool{eraser};
    switch (tool)
    {
    case pen :
        std::cout<< "active tool is pen"<< std::endl;
        break;
    case eraser :
        std::cout<< "active tool is eraser"<< std::endl;
        break;
    case marker :
        std::cout<< "active tool is marker"<< std::endl;
        break;
    
    default:
        std::cout<< "no tool currently active"<< std::endl;
        break;
    }

    return 0;

}