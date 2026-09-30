class Solution {
public:
    int mirrorDistance(int n) {
        int reverseN = 0;
        int dup = n;
        while( dup != 0){
            int digit = dup % 10;
            reverseN = (reverseN * 10) + digit;

            dup /= 10;
        }
        return abs(n - reverseN);
    }
};