TreeNode* replaceValueInTree(TreeNode* root) {
         unordered_map<int,int> mp;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            if(mp.find(node.second)==mp.end()){
                mp[node.second]=node.first->val;
            }
            else mp[node.second]+=node.first->val;
            if(node.first->left) q.push({node.first->left,node.second+1});
            if(node.first->right) q.push({node.first->right,node.second+1});
        }
        root->val=0;
        q.push({root,0});
        while(!q.empty()){
            auto node = q.front();
            q.pop(); 
            int s = 0;
            if(node.first->left) s+=node.first->left->val;
            if(node.first->right) s+=node.first->right->val;
            if(node.first->left){
                node.first->left->val=mp[node.second+1]-s;
                q.push({node.first->left,node.second+1});
            } 
            if(node.first->right){
                node.first->right->val=mp[node.second+1]-s;
                q.push({node.first->right,node.second+1});
            }
        }
        return root;
    }
