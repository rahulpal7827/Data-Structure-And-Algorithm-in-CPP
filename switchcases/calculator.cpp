# include <iostream>
using namespace std;

int main(){
    int num1,num2;
    char operation;
    cout<<"Enter the numbers:-";
    cin>>num1;
    cin>>num2;
    cout<<"Enter the operation(+,-,*,/,%):";
    cin>>operation;

    switch (operation)
    {
    case '+':
        cout<<num1+num2;
        break;
    case '-':
        cout<<num1-num2;
        break;
    case '*':
        cout<<num1*num2;
        break;
    case '/':
        cout<<num1/num2;
        break;
    case '%':
        cout<<num1%num2;
    default:
        cout<<"Invalid Operator";
        break;
    }
    return 0;
}