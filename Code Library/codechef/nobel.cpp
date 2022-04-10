#include<iostream>
using namespace std;
int main()
{
int t;

cin>>t;
for(int i=0;i<t;i++)
{
int m,n;
  cin>>n;
  cin>>m;
  int a[n];
  int b[m],k=0;
  for(int j=1;j<=n;j++)
    cin>>a[j];
  //now
 for( int j=1;j<=m;j++)
    b[j]=0;

  for(k=1;k<=n;k++)
    b[a[k]]++;

    for(k=1;k<=m;k++)
    {
        if(b[k]==0)
        {
            cout<<"yes"<<endl;
        break;
        }
    }
    if(k==m+1)
        cout<<"no"<<endl;
}
return 0;
}
