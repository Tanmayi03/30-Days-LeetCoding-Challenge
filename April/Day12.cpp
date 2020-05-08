class Solution {
public:
    int smash(int x,int y)
    {
        return abs(x-y);
    }
    
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        reverse(stones.begin(),stones.end());
        while(stones.size()>1)
        {
            int k = smash(stones[0],stones[1]);
            stones.erase(stones.begin());
            stones.erase(stones.begin());
            stones.push_back(k);
            lastStoneWeight(stones);
        }
        return stones[0];
    }
};
