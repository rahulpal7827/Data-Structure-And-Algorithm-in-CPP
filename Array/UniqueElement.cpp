# include <iostream>
using namespace std;

int uniqueele(int arr[],int size){
    int ans=0;

    for (int i = 0; i < size; i++)
    {
        ans^=arr[i];
    }
    
return ans;
}
int main (){
    int size;
    cout<<"Enter the size:"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of array:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"The unique element is:"<<uniqueele(arr,size);
    return 0;
    }