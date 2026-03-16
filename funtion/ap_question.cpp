# include <iostream>
using namespace std;
// create an ap -- (3*n+7) and find nth term;
int AP(int n){
    int ans =(3*n+7);
    return ans;
}

int main(){
    int n;
    cout<<"enter the term:";
    cin>>n;
    int value = AP(n);
    cout<<"The value of "<<n<<"th term is:"<<" "<<value<< endl;
}