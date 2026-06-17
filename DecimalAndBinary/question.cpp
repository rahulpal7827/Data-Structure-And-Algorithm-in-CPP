# include <iostream>
using namespace std;

int main(){
int n;
cout<<"enter";
cin>>n;
int i=0;
int ans=0;

while(n!=0){
    int bit = n&1;
    int compbit= bit^1;
    ans = ans | (compbit<<i);
    n = n >> 1;
    i++;
}
cout << ans;
}