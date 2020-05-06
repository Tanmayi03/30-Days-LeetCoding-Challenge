class Solution {
public:
    int findComplement(int num) {
        vector<int> binary;
        while(num>0)
        {
            binary.push_back(num%2);
            num = num/2;
        }
        
        vector<int> :: iterator it;
        for(it = binary.begin();it < binary.end();it++)
        {
            if(*it == 0)
            {
                *it = 1;
            }
            else if(*it == 1)
            {
                *it = 0;
            }
        }
        
        //int n = 0;
        it = binary.end()-1;
        int base = 0;
        while(it>=binary.begin())
        {
            if(*it == 1)
            {
                base = 2*base + 1;
            }
            else
            {
                base *= 2;
            }
            it--;
        }
        return base;
    }
};
