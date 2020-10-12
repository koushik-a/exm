#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> r;
        vector<int> v;
        int i;
        for(i=0;i<nums.size();i++)
        {
            int diff = target-nums[i];
            if(r.find(diff)!=r.end())
            {
                v.push_back(r[diff]);
                v.push_back(i);
            }
            r[nums[i]]=i;
        }
        return v;
        
    }
};
int main()
{
    vector<int> nums={2,7,9,10};
    int target=9;
    Solution s;
    vector<int> v;
    v=s.twoSum(nums,target);
    for(auto it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    return 0;
}
    
