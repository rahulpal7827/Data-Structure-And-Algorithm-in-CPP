# include <iostream>
using namespace std;

void SwapAlternative(int arr[],int size){
    //[1,2,3,4,5] ---->  [2,1,4,3,5]
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
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

    SwapAlternative(arr, size);
    cout<<"The array is: "<<endl;
    for (int j = 0; j < size; j++)
    {
        cout<<arr[j];
    }
    
    return 0;
}