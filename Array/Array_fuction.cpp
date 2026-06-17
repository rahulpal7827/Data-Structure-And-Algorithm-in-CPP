# include <iostream>
using namespace std;
// Maximum element.
int GetMaximum(int nums[]){
    int maximum = INT_MIN;
    for(int i =0 ; i<10; i++){
    maximum = max(maximum, nums[i]);
    }
    return maximum;
}
// Minimum Element.
int GetMinimum(int nums[]){
    int minimum = INT_MAX;
    for (int j = 0; j < 10; j++)
    {
        minimum = min(minimum, nums[j]);
    }
    return minimum;    
}

int main (){
    // maximum and minimum element in array 
    int nums[10];
    cout<<"Enter the elements in array:";
    for (int i = 0; i < 10; i++)
    {
        cin>>nums[i];
    }
    
    cout<<"The maximum element is:"<<" "<<GetMaximum(nums)<<endl;
    cout<<"The minimum element is:"<<" "<<GetMinimum(nums)<<endl;
    return 0;
}