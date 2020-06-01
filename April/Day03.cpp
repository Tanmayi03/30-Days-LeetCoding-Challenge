class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSoFar, maxEndingHere;
        maxSoFar = nums[0];
        maxEndingHere = 0;
        for(int i=0;i<nums.size();i++)
        {
            maxEndingHere += nums[i];
            if(maxSoFar < maxEndingHere)
            {
                maxSoFar = maxEndingHere;
            }
            if(maxEndingHere < 0)
            {
                maxEndingHere = 0;
            }
        }
        return maxSoFar;
    }
};
