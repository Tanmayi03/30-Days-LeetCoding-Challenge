class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0;
        int r = s.size()-1;
        while(l <= r)
        {
            char k = s[l];
            s[l] = s[r];
            s[r] = k;
            l++;
            r--;
        }
    }
};
