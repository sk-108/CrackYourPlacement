class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int c = 0;
        while(c<=j)
        {
            while(c<=j && nums[c] == 0)
            {
                swap(nums[c],nums[i]);
                c++;
                i++;
            }
            while(c<=j && nums[c] == 2)
            {
                swap(nums[c],nums[j]);
                j--;
            }
            while(c<=j && nums[c] == 1)
                c++;
        }
        
    }
};