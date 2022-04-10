class Solution {
public:
    bool isPerfectSquare(int num) {
        // double y=(log10(num))/2;
        // double x= pow(2.71, y);
        // double fraction ,p;
        // fraction = modf(x,&p);
        // if( fraction==0.00)
        //     return true;
        // else
        //     return false;
        if(num==1)
            return true;
        else{
        for(long long int i=1;i<=(num)/2;i++)
        {
            if(i*i==num)
            {
                return true;
            }
        }
        }
        return false;
    }
};