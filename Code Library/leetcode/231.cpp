class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        else{
        double a=log2(n);
        if(a==(int)a)
            return true;
        else
            return false;
        }
    }
};