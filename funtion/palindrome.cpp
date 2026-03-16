# include <iostream>
using namespace std;
// ---------------------------function approach:- 
// int fibo(int n){
//     if(n<0){
//         return -1;
//     }
//     if(n==0){
    //         return n;
    //     }
//     if(n==1){
//         return n;
//     }
//         int a=0;
//         int b=1;
//         int c=0;
//         for(int i= 2; i<=n;i++){
//             c= a+b;
//             a=b;
//             b=c;
//         }
//     return c;
// }


// -------recursive approach----
int fibo(int n){
    if(n<0){
        return -1;
    }
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    int value= fibo(n);
    cout<<value;
return 0;
}