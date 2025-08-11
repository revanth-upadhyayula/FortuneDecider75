#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto n:nums)
        {
            m[n]++;
        }
        for(auto a:m)
        {
            if(a.second>1)
            {
                return true;
            }
        }
        return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};
    bool result = containsDuplicate(nums);
    
    if(result) {
        cout << "Array contains duplicates." << endl;
    } else {
        cout << "Array does not contain duplicates." << endl;
    }
    
    return 0;
}