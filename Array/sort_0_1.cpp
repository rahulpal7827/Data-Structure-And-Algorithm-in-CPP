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
    int j=0;
    int k=nums.size() - 1;
    while(j<k){
        if(nums[j]==1 && nums[k]==0){
            swap(nums[j],nums[k]);
            j++;
            k--;
        }
        else if(nums[j]==0){
            j++;
        }
        else{
            k--;
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }

    return 0;
}