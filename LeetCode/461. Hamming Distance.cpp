https://leetcode.com/problems/hamming-distance/
class Solution {
public:
    int hammingDistance(int x, int y) {
        int a=x^y;
        int c=0;
        while(a!=0)
        {
            if(a%2!=0)
                c++;
            a=a/2;
        }
        return c;
    }
};
