class Solution {
public:
    string addBinary(string a, string b) {
        char ch='0';
        if(b.size()>a.size())
            swap(a,b);
        int i=0;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        while(i<b.size())
        {
            if(ch=='0')
            {
                if(a[i]=='0' && b[i]=='1')
                    a[i]='1';
                else if(a[i]=='1' && b[i]=='1')
                {
                    a[i]='0';
                    ch='1';
                }
            }
            else
            {
              if(a[i]=='1' && b[i]=='0')
                  a[i]='0';
                else if(a[i]=='0' && b[i]=='0')
                {
                    a[i]='1';
                    ch='0';
                }
            }
            i++;
        }
        while(i<a.size())
        {
            if(ch=='1')
            {
                if(a[i]=='0')
                {
                    a[i]='1';
                    ch='0';
                }
                else
                {
                    a[i]='0';
                }
            }
            else
                break;
            i++;
        }
        if(ch=='1')
            a.push_back('1');
        reverse(a.begin(),a.end());
        return a;
    }
};