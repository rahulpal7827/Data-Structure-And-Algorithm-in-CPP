# include <iostream>
using namespace std;
// CALCULATOR USING LAMBDA FUNCTION

int main(){
    int a,b;
    cout<<"Enter the values:-"<<endl;
    cin>>a>>b;

    auto result_1 = [&](){
        cout<<"The sum the two values is:"<<(a+b)<<endl;
    };

    auto result_2 = [&](){
        cout<<"The difference the two values is:"<<(a-b)<<endl;
    }; 
    auto result_3 = [&](){
        cout<<"The multiply the two values is:"<<(a*b)<<endl;
    };   
    auto result_4 = [&](){
        cout<<"The division the two values is:"<<(static_cast<double>(a)/b)<<endl;
    };
    result_1();
    result_2();
    result_3();
    result_4();
    return 0;
}


// auto calculate = [&](char op) {
//     switch(op) {
//         case '+': cout << a + b; break;
//         case '-': cout << a - b; break;
//         case '*': cout << a * b; break;
//         case '/':
//             if(b != 0)
//                 cout << static_cast<double>(a) / b;
//             break;
//     }
// };