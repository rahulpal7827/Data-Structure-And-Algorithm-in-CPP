# include <iostream>
using namespace std;

int main(){
    double value {12.56};
    double &reference_value{value};
    double *pointer_value{&value};
    reference_value = 45.56;// changes apply to main value
    *pointer_value=12.56;
    cout<<"value"<<value<<endl;
    cout<<"reference value"<<reference_value<<endl;
    cout<<"pointer_value"<<pointer_value<<endl;
    cout<<"pointer address value"<<*pointer_value<<endl;
    return 0;
}