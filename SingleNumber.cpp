#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums){
    int ans=0;
    for(int num:nums){
        ans^=num;
    }
    return ans;
}
int main(){
    vector<int> nums={2,2,1};
    cout<<"Outputs :"<<singleNumber(nums)<<endl;
    return 0;
}