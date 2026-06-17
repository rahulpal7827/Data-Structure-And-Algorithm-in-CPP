# include <iostream>

int main(){
    int a=4; 
    int* add1=&a;
    int** add2 = &add1;
    std::cout<<a<<std::endl;
    std::cout<<add1<<std::endl;
    std::cout<<add2<<std::endl;
    return 0;
}