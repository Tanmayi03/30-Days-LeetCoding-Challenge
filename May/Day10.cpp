class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        map<int,int> n,m;
        map<int,int> :: iterator it,it1;
        if(N == 1)
        {
            return 1;
        }
        else
        {
            for(int i=0;i<trust.size();i++)
            {
                n[trust[i][0]]++;
                m[trust[i][1]]++;
            }
        }
        for(it = m.begin();it != m.end();it++)
        {
            if(it->second == N-1)
            {
                it1 = n.find(it->first);
                {
                    if(it1->second == 0)
                    {
                        return it->first;
                    }
                }
            }
        }
        return -1;
    }
};
