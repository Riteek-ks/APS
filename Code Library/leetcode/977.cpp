class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int k=j;
        vector<int> ans(k+1,0);
        while(i<=j)
        {
            if(nums[i]*nums[i]<=nums[j]*nums[j])
            {
                ans[k]=nums[j]*nums[j];
                k--;
                j--;
            }
            else
            {
                ans[k]=nums[i]*nums[i];
                i++;
                k--;
            }
        }
        return ans;
    }
};