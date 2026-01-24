class Solution {
public:
    int Balanced(TreeNode* root){
        if(root == nullptr){
            return 0;
        }

        int lh = Balanced(root->left);
        int rh = Balanced(root->right);
         
        if(lh==-1 || rh==-1) return -1;

        
        if(abs(lh-rh)>1) return -1;
        
        return max(lh,rh) + 1;
        
    }

    bool isBalanced(TreeNode* root) {
        return Balanced(root)!=-1;
        
    }
};