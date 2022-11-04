/*Given a binary tree, find its level order traversal.
Level order traversal of a tree is breadth-first traversal for the tree.


Example 1:

Input:
    1
  /   \ 
 3     2
Output:1 3 2
  */



class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      vector<int> ans;
      if(root==NULL)
      return ans;
      queue<Node*> q;
      q.push(root);
      
      while(!q.empty())
      {
          Node* temp=q.front();
          q.pop();
          ans.push_back(temp->data);
          if(temp->left!=NULL)q.push(temp->left);
          if(temp->right!=NULL)q.push(temp->right);
      }
      return ans;
      //Time Complexity:-O(n);
      //Space Complexity:-O(n);
    }
};
