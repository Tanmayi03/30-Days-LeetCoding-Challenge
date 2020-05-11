class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>note;
        map<char,int>mag;
        map<char,int> :: iterator it1;
        map<char,int> :: iterator it2;
        for(int i=0;i<ransomNote.length();i++)
        {
            note[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.length();i++)
        {
            mag[magazine[i]]++;
        }
        int k = 0;
        for(it1=note.begin();it1 != note.end();it1++)
        {
            it2 = mag.find(it1->first);
            if(it2 != mag.end())
            {
                if(it2->second >= it1->second)
                {
                    k++;
                }
            }
        }
        if(k == note.size())
        {
            return true;
        }
        return false;
    }
};
