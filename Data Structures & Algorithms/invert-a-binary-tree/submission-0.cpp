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
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> st;
        st.push({root});

        TreeNode* n=nullptr;
        TreeNode* temp=nullptr;
        
        while(!st.empty()){
            n=st.top();
            st.pop();

            if(n){
                st.push({n->left});
                st.push({n->right});

                temp=n->left;
                n->left=n->right;
                n->right=temp;
            }
        }
        return root;
    }
};
