// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1;
        int r=n;
        while (l <= r) {
        int m = l + (r - l) / 2;
        // if (isBadVersion(m))
        //     return l;
  
        if (isBadVersion(m)==false)
            l = m + 1;
  
        else
            r = m - 1;
    }
  
    return l;
    }
};