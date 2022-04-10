#include <bits/stdc++.h>
using namespace std;
bool check(char c)
{
    if(c=='A'|| c=='a' ||c=='O'|| c=='o'||c=='Y'|| c=='y'||c=='E'|| c=='e'||c=='U'|| c=='u'||c=='I'|| c=='i')
    return true; 
    else
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        string s,j;
        cin>>s;
        for(int i=0;i<s.size();i++)
        { 
            bool b=check(s[i]);
            if(b==1)
            continue;
            else
            {
                if(isupper(s[i]))
                {
                    char d=tolower(s[i]);
                    j=j+'.';
                    j=j+d;
                }
                else
                {
                j=j+'.';
                j=j+s[i];
                }
            }
        }
        cout<<j<<endl;
}