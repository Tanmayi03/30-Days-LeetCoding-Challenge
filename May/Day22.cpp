class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m;
        for(int i = 0;i < s.length();i++)
        {
            m[s[i]]++;
        }
        vector<int>v;
        string t;
        map<char,int> :: iterator it;
        for(it = m.begin();it != m.end();it++)
        {
            v.push_back(it->second);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i = 0;i < v.size();i++)
        {
            for(it = m.begin();it != m.end();it++)
            {
                if(it->second == v[i])
                {
                    while(it->second > 0)
                    {
                        t.push_back(it->first);
                        it->second --;
                    }
                    m.erase(it->first);
                }
            }
        }
        return t;
    }
};
