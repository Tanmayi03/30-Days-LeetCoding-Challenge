class Solution {
public:
    int val,cnt=0;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(cnt==0)
        {
            val = image[sr][sc];
            cnt++;
        }
        if(sr<0 || sr>image.size()-1 || sc<0 || sc>image[0].size()-1)
        {
            return image;
        }else if(image[sr][sc] == val && image[sr][sc] != newColor)
        {
            image[sr][sc] = newColor;
            floodFill(image,sr+1,sc,newColor);
            floodFill(image,sr,sc+1,newColor);
            floodFill(image,sr-1,sc,newColor);
            floodFill(image,sr,sc-1,newColor);
        }
        return image;
    }
};
