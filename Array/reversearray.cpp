# include <iostream>
using namespace std;

void ReverseArray(int nums[], int size){

    int start=0;
    int end = size-1;
    while(start<end){
        int temp =0;
        temp = nums[start];
        nums[start]=nums[end];
        nums[end]= temp;
        start++;
        end--;
    }
}


int main(){
    int size;
    cout<<"Enter the size of the array:"<<endl;
    cin>>size;
    int nums[size];
    cout<<"Enter the elements of array: "<< endl;
    for (int i = 0; i < size; i++)
    {
        cin>>nums[i];
    }
    ReverseArray(nums, size);
    for (int i = 0; i < size; i++)
    {
        cout<<nums[i];
    }

    return 0;
}