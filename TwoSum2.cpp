#include<iostream>
#include<vector>
using namespace std;
vector<int> TwoSum(vector<int> number,int target){
    int left=0, right=number.size()-1;
    while(left<right){
        int sum=number[left]+number[right];
        if(sum==target){
            return {left+1,right+1};
        }else if(sum<target){
            left++;
        }else{
            right--;
        }
    }
    return {};
}
int main(){
    vector<int> num = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = TwoSum(num, target);

    if(!result.empty()){
        cout << "The Two Sum indices are: ";
        for(int i : result){
            cout << i << " ";
        }
    } else {
        cout << "No solution found";
    }

    return 0;
}