
class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL){
            return 0;
          
        }
        int max_d = 1;
        for(int i = 0 ; i < root->children.size(); i++){
            max_d = max(max_d, 1 + maxDepth(root->children[i]));

        }
        return max_d;
        
    }
};