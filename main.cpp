#include <iostream>
#include "BST.h"
using namespace std;

BinaryTreeNode<int>* searchInBST(BinaryTreeNode<int> *root , int k){
  if(root==NULL)
    return NULL;
  if(root->data==k)
    return root;
  else if(root->data>k)
    return searchInBST(root->left,k);
  else if(root->data<k)
    return searchInBST(root->right,k);

}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
