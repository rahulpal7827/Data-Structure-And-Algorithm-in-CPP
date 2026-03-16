# include <iostream>
# include <vector>
using namespace std;

int main(){
    vector<int> nums(6);
    cout<<"Enter the value of array:";
    for (int i = 0; i < nums.size(); i++)
    {
        cin>>nums[i];
    }
    int left=0;
    int right=nums.size() - 1;
    int mid = 0;

    while(mid<=right){
        if(nums[mid]==0){
            swap(nums[left],nums[mid]);
            mid++;
            left++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[right]);
            right--;
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }

    return 0;
}