class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> frequency;
        for(int i=0;i<nums.size();i++)
        {
            frequency[nums[i]]++;
        }
        
        int k;
        for(auto i = frequency.begin();i!=frequency.end();i++)
        {
            if((i->second) > (nums.size()/2))
            {
                k = i->first;
                break;
            }
        }
        return k;
    }
};
