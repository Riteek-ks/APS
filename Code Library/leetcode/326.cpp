class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
            return false;
        else{
        while(n!=1)
        {
            if(n%3==0)
                n=n/3;
            else
            {
                return false;
            }
        }
        }
        return true;
    }
};