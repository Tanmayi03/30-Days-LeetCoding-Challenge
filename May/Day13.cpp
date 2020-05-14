class Solution {
public:
    string removeKdigits(string num, int k) {
         if(k == num.length())
            return "0";
        
        int cnt=0;
        while(k-- != 0)
        {
            for(int i=0;i<num.length()-1;i++)
            {
                if((num[i]-'0') > (num[i+1]-'0'))
                {
                    num.erase(i,1);
                    break;
                }else if(i==num.length()-2)
                {
                    num.erase(i+1,1);
                }
            }
        }
        for(int i=0;i<num.length();i++)
        {
            if(num[i] != '0')
            {
                break;
            }else
            {
                num.erase(i,1);
                i--;
            }
        }
        if(num.length() == 0 )
            return "0";
        return num;
    }
};
