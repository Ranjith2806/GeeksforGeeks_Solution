/* 
Given a Binary Tree of size N , You have to count leaves in it. For example, there are two leaves in following tree

        1
     /      \
   10      39
  /
5

 

Example 1:


Input:
Given Tree is 
               4
             /   \
            8     10
           /     /   \
          7     5     1
         /
        3 
Output:
3
*/
int countLeaves(Node* root)
{
  if(root == NULL)
  return 0;
  
  if(root->left == NULL && root->right == NULL)
  return 1;
  
  int leftnode = countLeaves(root->left);
  int rightnode = countLeaves(root->right);
  
  return leftnode+rightnode;
  
  //Time Complexity : O(n)
  //Space Complexity : O(n)
}
