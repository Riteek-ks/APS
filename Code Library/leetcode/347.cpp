bool cmp(pair<int,int> &a,pair<int,int> &b){
    return a.first<b.first;
}
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        // if(k==1)
        // {
        //     return {nums[0]};
        // }
        // else{
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        vector<pair<int,int>>v;
        
        for(auto it=m.begin();it!=m.end();it++)
            v.push_back(make_pair(it->second,it->first));
        sort(v.begin(),v.end());
        // for(auto it: v){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        int cnt=0;
        for(int j=v.size()-1;j>=0;j--)
        {
            if(cnt==k)
                break;
            else
            {
                ans.push_back(v[j].second);
               // cout<<v[j].first;
                cnt++;
            }
        }
        return ans;
        // }
    }
};