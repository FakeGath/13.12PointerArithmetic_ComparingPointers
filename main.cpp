#include<iostream>

int main(){

    int scores[10] {11,12,13,14,15,16,17,18,19,20};

    int* pointer1 {&scores[1]};
    int* pointer2 {&scores[8]};
    
    std::cout<<"Pointer 1: "<< pointer1<<std::endl;
    std::cout<<"Pointer 2: "<< pointer2<<std::endl;

    std::cout<<"Comparing Pointers: "<<std::boolalpha<<std::endl;

    std::cout<<"pointer1 < ponter 2: "<<(pointer1 < pointer2)<<std::endl;
    std::cout<<"pointer1 > ponter 2: "<<(pointer1 > pointer2)<<std::endl;
    std::cout<<"pointer1 <= ponter 2: "<<(pointer1 <= pointer2)<<std::endl;
    std::cout<<"pointer1 >= ponter 2: "<<(pointer1 >= pointer2)<<std::endl;
    std::cout<<"pointer1 == ponter 2: "<<(pointer1 == pointer2)<<std::endl;
    std::cout<<"pointer1 != ponter 2: "<<(pointer1 != pointer2)<<std::endl;


}