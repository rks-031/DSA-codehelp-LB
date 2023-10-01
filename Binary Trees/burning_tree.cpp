class Solution {
    public:
        Node* createParentMapping(Node* root, int target, map<Node*, Node*> &nodeToParent){
            Node* res = NULL;
            queue<Node* >q;
            q.push(root);
            nodeToParent[root] = NULL;
            
            //level order traversal
            while(!q.empty()){
                Node* front = q.front();
                q.pop();
                
                //find target node
                if(front->data == target){
                    res = front;
                }
                
                //checking for right, left neighbour
                if(front->left){
                    nodeToParent[front->left] = front;
                    q.push(front->left);
                }
                
                if(front->right){
                    nodeToParent[front->right] = front;
                    q.push(front->right);
                }
                
            }
            return res;
        }
        
        int burnTree(Node* root, map<Node*, Node*> nodeToParent){
    map<Node*, bool> visited;
    visited[root] = true;
    
    int ans = 0;
    
    queue<Node* >q;
    q.push(root);
    
    while(!q.empty()){
        int size = q.size();
        bool flag = false;
        
        for(int i=0;i<size;i++){
            Node* front = q.front();
            q.pop();
            
            if(front->left && !visited[front->left]){
                flag = true;
                q.push(front->left);
                visited[front->left] = true;
            }
            
            if(front->right && !visited[front->right]){
                flag = true;
                q.push(front->right);
                visited[front->right] = true;
            }
            
            if(nodeToParent[front] && !visited[nodeToParent[front]]){
                flag=true;
                q.push(nodeToParent[front]);
                visited[nodeToParent[front]]=true;
            }
        }
        
        if(flag) {
            ans++;  // Increment time if any nodes were burned in this level
        }
    }
    
    return ans;
}
  
    int minTime(Node* root, int target) 
    {
        map<Node*, Node* > nodeToParent;
        Node* targetNode = createParentMapping(root, target, nodeToParent);
        int ans = burnTree(targetNode, nodeToParent);
        
        return ans;
    }
};