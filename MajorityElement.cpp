#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums){
    int majority=0,lead=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==majority){
            lead++;
        }else if(lead>0){
            lead--;
        }else{
            majority=nums[i];
            lead++;
        }
    }return majority;
}
int main(){
    vector<int> nums={3,2,3,2,3,2,2,2,2};
    cout<<"Majority Elements are: "<<majorityElement(nums);
    return 0;
}