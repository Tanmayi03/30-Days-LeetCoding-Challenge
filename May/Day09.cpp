class Solution {
public:
    bool isPerfectSquare(int num) {
        double root = sqrt(num);
        return (root-round(root) == 0);
    }
};
