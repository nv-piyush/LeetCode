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
#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>> result;

        if(!root)  return result;
        
        queue<TreeNode*> Q;
        Q.push(root);
        
        while(!Q.empty()){
            int n=Q.size();
            vector<int> v2(n);
            
            for(int i=0;i<n;i++){
                TreeNode *n=Q.front();
                Q.pop();
                v2[i]=n->val;
                if(n->left!=NULL){
                    Q.push(n->left);
                }
                if(n->right!=NULL){
                    Q.push(n->right);
                }
            }
            result.push_back(v2);
        }
        
        reverse(result.begin(),result.end());
        
        return result;
    }
};
