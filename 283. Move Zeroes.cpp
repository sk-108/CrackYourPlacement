class Solution {
public:
    void rec(vector<int>&arr,int i,int size)
    {
        if(i == size)
        {
            return ;
        }
        else{
            if(arr[i] != 0)
            {
                return rec(arr,i+1,size);
            }
            else{
                rec(arr,i+1,size);
                int temp = arr[i];
                for(int c=i;c<size-1;c++)
                {
                    arr[c] = arr[c+1];
                }
                arr[size-1] = 0;
            }
        }
        return ;
    }
    void moveZeroes(vector<int>& nums) {
        int zeroptr = 0;
        int itr = 0;
        rec(nums,0,nums.size());
        return ;
    }
};