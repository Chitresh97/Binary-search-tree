#include <iostream>
#include <bits/stdc++.h>
#include<vector>
#include "BST.h"
using namespace std;

void helperForElementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2){
  if(root==NULL)
    return;
  if(root->data>=k1&&root->data<=k2){
    elements.push_back(root->data);
  helperForElementsInRangeK1K2(root->right,k1,k2);
  helperForElementsInRangeK1K2(root->left,k1,k2);
  }
  else if(root->data<k1)
    helperForElementsInRangeK1K2(root->right,k1,k2);
  else if(root->data>k2)
    helperForElementsInRangeK1K2(root->left,k1,k2);

}
void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) {

  helperForElementsInRangeK1K2(root,k1,k2);
  sort(elements.begin(),elements.end());
  for(int i=0;i<elements.size();i++){
    cout<<elements[i]<<" ";
  }
}

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
