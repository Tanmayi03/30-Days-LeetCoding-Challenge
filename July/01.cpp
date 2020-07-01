class Solution {
public:
    int arrangeCoins(int n) {
        int k = 0;
        int j = 1;
        while(n >= j)
        {
            n -= j;
            k++;
            j++;
        }
        return k;
    }
};
