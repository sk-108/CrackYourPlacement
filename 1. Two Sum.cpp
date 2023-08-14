class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(nums);
        sort(nums.begin(),nums.end());
        int i=0;
        int j = nums.size()-1;
        vector<int>idx;
        while(i<j)
        {
            int sum = nums[i] + nums[j];
            if(sum == target)
            {
                idx.push_back(nums[i]);
                idx.push_back(nums[j]);
                // return idx;
                break;
            }
            else if(sum > target)j--;
            else i++;
        }
        
        vector<int>temp;
        for(int i=0;i<idx.size();i++)
        {
            for(int j=0;j<ans.size();j++)
            {
                if(idx[i] == ans[j])
                {
                    temp.push_back(j);
                    ans[j] = -1;
                    break;
                }
            }
        }
        return temp;
    }
};



//using hashmap

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int complement = target - nums[i];
            if(m.find(complement) != m.end())
            {
                ans.push_back(i);
                ans.push_back(m[complement]);
            }
            m[nums[i]] = i;
        }
        return ans;
    }
};