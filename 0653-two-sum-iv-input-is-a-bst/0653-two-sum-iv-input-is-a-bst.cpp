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
    int find(TreeNode* root,int k,map<int,bool>& mp)
    {
        if(root==NULL) return 0;
        if(mp[root->val]==true)
        {
            return 1+find(root->left,k,mp)+find(root->right,k,mp);
        }
        else
        {
            mp.insert({k-root->val,true});
            
            return find(root->left,k,mp)+find(root->right,k,mp);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL) return false;
        map<int,bool> mp = {{k-root->val,true}};
        int left = find(root->left,k,mp);
        int right = find(root->right,k,mp);
        return (left+right)>0;
    }
};