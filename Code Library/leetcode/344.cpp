class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int j=s.size();
        for(int i=0;i<j/2;i++)
        {
            swap(s[i],s[j-1-i]);
        }
    }
};