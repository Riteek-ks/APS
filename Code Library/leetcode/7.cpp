class Solution {
public:
    int reverse(int x) {
        long long z=x;
        long long y;
        if(x>=0)
            y=z;
        else
            y=-z;
        string s=to_string(y);
        stack<char>m;
        for(int i=0;i<s.size();i++)
            m.push(s[i]);
        int i=0,j=0;
        while(!m.empty())
        {
            if(i==0)
            {
                if(m.top()==0)
                m.pop();
                else
                {
                    s[j]=m.top();
                    m.pop();
                    j++;
                }
            }
            else
            {
                s[j]=m.top();
                m.pop();
                j++;
            }
            i++;
        }
        long long u=stoll(s);
        if(u>=INT_MIN && u<=INT_MAX){
        if(x>=0)
            u=u;
        else
            u=-u;
            
        return u;
        }
        else
            return 0;
        
    }
    //321
};