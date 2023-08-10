//https://leetcode.com/submissions/detail/1007091046/

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
#include <queue>
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        
        // Method 1:-
        
//         vector<vector<int>> h;
        
//         vector<int> v;
//         queue<TreeNode*> q;
        
        
        
//         if(root== NULL){
//             return h;
//         }
        
//         if(root->right == NULL  &&  root-> left == NULL){
//             v.push_back(root->val);
//             h.push_back(v);
//             return h;
//         }
        
//         q.push(root);
        
//         while(!q.empty()){
//             if(root -> left != NULL){
//                 q.push(root->left);
//             }
            
//             if(root -> left == NULL){
//                 continue;
                
//             }
            
//             else{
//                 if(root->right != NULL){
//                     q.push(root-> right);
//                     v.push_back(root->val);
//                     q.pop();
//                     root=q.front();
//                 }
                
//                 v.push_back(root->val);
//                 q.pop();
//                 root=q.front();
//             }
//         }
        
//         vector<int> b;
        
//         b.push_back(v[0]);
//         h.push_back(b);
//         b.clear();
        
//         for(int i=1; i<=v.size()/2; i++){
            
//               for(int j=(i*2)-1; j<(i*2)+1; j++){
//                   int t=v[j];
//                   b.push_back(t);
            
//              }
//             h.push_back(b);
//             b.clear();
            
//         }
        
//         return h;
        
        
        
        // Method2:-

        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int>v;
            for(int i=0;i<s;i++){
                TreeNode *node=q.front();
                q.pop();
                if(node->left!=NULL)q.push(node->left);
                if(node->right!=NULL)q.push(node->right);
                v.push_back(node->val);
            }
            ans.push_back(v);
        }
        return ans;
        
        
        
    }
};
