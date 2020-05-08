class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int p = 0;
        vector<int> :: iterator it;
        for(it=nums.begin();it<nums.end();it++)
        {
            p ^= *it;
        }
        return p;
    }
};
