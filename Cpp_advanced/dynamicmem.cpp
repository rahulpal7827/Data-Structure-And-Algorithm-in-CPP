# include <iostream>
using namespace std;

int main(){
    int* ptr1 {new int{78}};
    cout<< *ptr1;
    delete ptr1;
    ptr1=nullptr;// important

    return 0;
}