/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
       
class Solution {
public:
    int cnt = 0;
    int dep1 = 0;
    int dep2 = 0;
    int *pre1;
    int *pre2;
    
    void depths(TreeNode* n,int x,int y) 
    {
        if(n->left != NULL)
        {
            cnt++;
            if(n->left->val == x)
            {
                pre1 = &(n->val);
                dep1 = cnt;
            }
            if(n->left->val == y)
            {
                pre2 = &(n->val);
                dep2 = cnt;
            }
            depths(n->left,x,y);
        }
        
        if(n->right !=NULL)
        {
            cnt++;
            if(n->right->val == x)
            {
                pre1 = &(n->val);
                dep1 = cnt;
            }
            if(n->right->val == y)
            {
                pre2 = &(n->val);
                dep2 = cnt;
            }  
            depths(n->right,x,y); 
        }
        cnt--;
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
         TreeNode* l1 = root;
        depths(l1,x,y);
        if(pre1!=pre2 && dep1==dep2)
            return true;
        else
            return false;
        
    }
};
