//Day 23: BST Level-Order Traversal

#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

	void levelOrder(Node * root){
      //Write your code here
      queue<Node *>q;
      q.push(root);
      
      while(q.size()!=0)
      {
          Node *current=q.front();
          q.pop();
          
          cout<<current->data<<" ";
          
          if(current->left)
          {
              q.push(current->left);
          }
          if (current->right) 
          {
               q.push(current->right);
          }          
          
      }
  	 
	}

};
int main(int argc, char const *argv[])
{   
	Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);

return 0;
}