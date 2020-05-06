class Solution {
public:
    int unique(string s,map<char,int>freq)
    {
        int k = -1;
        map<char,int> :: iterator it;
        for(int i=0;i<s.length();i++)
        {
            it = freq.find(s[i]);
            if(it->second == 1)
            {
                k = i;
                break;
            }
        }
        return k;
    }
    
    int firstUniqChar(string s) {
        map<char,int> freq;
        for(int i=0;i<s.length();i++)
        {
            freq[s[i]]++;
        }
        int k = unique(s,freq);
        return k;
    }
};
