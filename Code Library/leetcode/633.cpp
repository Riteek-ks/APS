class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a=sqrt(c);
        long long int i=0;
        while(i<=a){
            if((i*i)+(a*a)>c){
                a--;
             }
            else if((i*i)+(a*a)<c){
                i++;
             }
            else if((i*i)+(a*a)==c){
                return true;
             }
            
          }
        return false;
    }
};