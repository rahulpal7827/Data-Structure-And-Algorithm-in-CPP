# include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the amount:";
    cin>>num;
    // 100,50,20,1
    int choice=1;
    int n100=0, n50=0, n20=0, n1=0;
    switch(choice){
        case 1: 
            n100= num/100;
            num%=100;
            choice= 2;
        case 2: 
            n50= num/50;
            num%=50;
            choice= 3;
        case 3: 
            n20= num/20;
            num%=20;
            choice= 4;
        case 4: 
            n1= num;
            break;
    }
    cout<<"The 100 rupees notes are: "<<n100<<endl;
    cout<<"The 50 rupees notes are: "<<n50<<endl;
    cout<<"The 20 rupees notes are: "<<n20<<endl;
    cout<<"The 1 rupees notes are: "<<n1<<endl;
    return 0;
}