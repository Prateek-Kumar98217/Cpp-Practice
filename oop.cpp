#include <iostream>
using std::string;
class Newclass{
    private:
        string name;
        int age;

    public:

        void setname(string name2){//this is a setter
            name = name2;
        };

        string getname(){//this is a getter
            return name;
        };

        void setage(int age2){//this is a setter
            age = age2;
        };

        int getage(){//this is a getter
            return age;
        };

        void function1(){

            std::cout<< "name: "<< name<< std::endl;
            std::cout<< "age: "<< age<< std::endl;

        };
        Newclass(string name1, int age1){

            name = name1;
            age = age1;

        };
};
int main(){

    Newclass myobj = Newclass("ram mohan", 47);
    myobj.function1();

    myobj.setname("raj");
    myobj.setage(37);
    myobj.function1();

    std::cout<< "the setted name is: "<< myobj.getname()<< std::endl;
    std::cout<< "the setted age is: "<< myobj.getage()<< std::endl;
    
    return 0;
}