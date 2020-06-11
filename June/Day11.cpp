class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                {
                    swap(nums[i],nums[j]);
                }
            }
        }
        
        for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }
};
