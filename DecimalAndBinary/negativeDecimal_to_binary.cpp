// # include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the negative decimal number->";
//     cin>> n;

//     int bits;
//     cout << "Enter the number of bits for conversion->";
//     cin>> bits;

//     unsigned int ans = (1 << bits) + n;

//     for(int i= bits-1; i>=0; i--){
//         cout << ((ans >> i) & 1);
//     }

//     return 0;

// } ----BY CHATGPT

# include <iostream>
# include <math.h>
using namespace std;

int main(void){
    long long int n;
    cout << "Enter the negative decimal number->";
    cin>> n;

    unsigned long long int i=0, ans=0;

    if(n<0){
        n= pow(2,16)+n;
    }
    cout<<n<<endl;
    while(n){
        int lastbit= n & 1;
        ans = (pow(10,i) * lastbit)+ans;
        n= n>>1;
        i++;
        cout<< ans<< endl;
    }
    cout<< ans<< endl;
    return 0;
}