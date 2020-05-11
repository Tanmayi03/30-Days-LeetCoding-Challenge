class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double m = ((double)coordinates[1][1] - (double)coordinates[0][1])/((double)coordinates[1][0] - (double)coordinates[0][0]);
        for(int i=0;i<coordinates.size()-1;i++)
        {
            if(((double)coordinates[i+1][1] - (double)coordinates[i][1])/((double)coordinates[i+1][0] - (double)coordinates[i][0])!=m)
            {
                return false;
            }
        }
        return true;
    }
};
