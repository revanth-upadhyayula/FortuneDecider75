#include<bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> m;
    for(int i=0;i<nums.size();i++)
    {
        int d=target-nums[i];
        if(m.find(d)!=m.end())
        {
            return {m[d],i};
        }
        m[nums[i]]=i;
    }
    return {-1,-1};
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    
    if(result[0] != -1) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }
    
    return 0;
}
