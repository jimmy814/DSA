#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> TwoSum(vector<int>& nums, int target){
    unordered_map<int , int> mp;
    for(int i=0;i<nums.size();i++){
        int complement=target-nums[i];
        if(mp.find(complement)!= mp.end()){
            return {mp[complement],i};
        }
        mp[nums[i]]=i;
    }
    return {};
}
int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = TwoSum(nums, target);

    if (!result.empty()) {
        cout << "The Two Sum indices are: "
             << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}