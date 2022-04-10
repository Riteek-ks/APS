class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int a=s.size();
        int b=goal.size();
        vector<int> v;
        int count=0;
        if(a!=b)
            return false;
        for(int i=0;i<a;i++)
        {
            if(s[i]==goal[i])
            {
                count++;
            }
            else if(s[i]!=goal[i])
                v.push_back(i);
        }
        int c=v.size();
        if(count==a){
            set<char> uniquechar;
            for(auto c : s){
                uniquechar.insert(c);
            }
            if(uniquechar.size() <a)
                return true;
            else
                return false;
            
        }
        
        if(c==2)
        {
            if(s[v.at(0)]==goal[v.at(1)] and s[v.at(1)]==goal[v.at(0)])
                return true;
            else
                return false;
        }
        else 
            return false;
        
        //return 0;
    }
};