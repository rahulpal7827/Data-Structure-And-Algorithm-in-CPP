# include <iostream>
using namespace std;

int setbit(int n){
    int count =0;
    while(n){
       n= n&(n-1);
        count++;
    }
  return count;
}

int powof2(int arr[]){
    int count =0;
    for (int i = 0; i < 10; i++)
    {
        if(setbit(arr[i])==1){
            count++;
        }
        
    }
    return count;
}


int main (){
    int arr[10];
    cout<<"Enter element in array:";
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
cout<<"The number of elements in array that is in the power of 2 are : "<<powof2(arr)<<endl;
    return 0;
}