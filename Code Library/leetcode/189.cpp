class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>ans;
        int i=0;
        int j=nums.size();
        int n=k%j;
        int r=j-n;
        int l=r;
        while(r<=(j-1))
        {
            ans.push_back(nums[r]);
            r++;
        }
        while(i<l)
        {
            ans.push_back(nums[i]);
            i++;
        }
        nums=ans;
    }
};