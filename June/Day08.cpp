class Solution {
public:
    bool check(int n)
    {
        while(n>0)
        {
            if(n%2==0)
            {
                n /= 2;
            }
            else
            {
                break;
            }
        }
        if(n==1)
        {
            return true;
        }
        return false;
    }
    
    bool isPowerOfTwo(int n) {
        bool k;
        if(n==0)
        {
            return false;
        }
        else if(n==1)
        {
            return true;
        }
        else
        {
            k = check(n);
        }
        return k;
    }
};
