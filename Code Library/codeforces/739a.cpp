#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int>result;
    
    for(int i=1;i<=1000000;i++){
        
        if((i%3)==0 || (i%10)==3){
            continue;
        }
        
        result.push_back(i);
        
    }
    
    int t;
    cin>>t;
    
    while(t--){
        
        int k;
        cin>>k;
        
        cout<<result[k-1]<<endl;
        
    }
    
    return 0;
    
}