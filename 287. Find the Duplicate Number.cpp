// with modification of the array
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[abs(nums[i])-1] < 0)
            {
                return abs(nums[i]);
            }
            else{
                nums[abs(nums[i])-1] *= -1;
            }
        }
        return -1;
    }
};


// without modificaion of the array

