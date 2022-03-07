#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
    int data;node *left;node *right;
    node(int x){
        data=x;
        left=right=NULL;
       
    }
   
};
class tree{
    public:
    node *search(node *root,int data){
        queue <node *>q;
        if(root->data==data){
            return root;
        }
        q.push(root);
        while(!q.empty()){
            node *temp=q.front();
            q.pop();
            node *lc=temp->left;
            node *rc=temp->right;
            if(lc){
                if(lc->data==data){
                    return lc;
                }
                else{
                    q.push(lc);
                }
               
            }
            if(rc){
                if(rc->data==data){
                    return rc;
                }
                else{
                    q.push(rc);
                }
               
            }
        }
        return NULL;
       
       
       
    }
    node *insert(node *root,int rd,int ld,int rid){
        if(root==NULL){
        return root;
        }
        node *temp=new node(0);
        temp=search(root,rd);
        // cout<<temp->data;
        if(ld!=-1){
            temp->left=new node(ld);
        }
        if(rid!=-1){
            temp->right=new node(rid);
        }
        return root;
    }
 
    void inorder(node *root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    void preorder(node *root){
        if(root==NULL){
            return;
        }
         cout<<root->data<<" ";
        preorder(root->left);
       
        preorder(root->right);
    }
    void postorder(node *root){
        if(root==NULL){
            return;
        }
        postorder(root->left);
        postorder(root->right);
         cout<<root->data<<" ";
    }
};

int main()
{
    tree t;

    node *root=new node(10);
    root->left=new node(15);
    root->right=new node(15);
    root->left->left=new node(1);
    root->left->right=new node(14);
   root=t.insert(root,1,12,34);
    root=t.insert(root,12,-1,45);
       
    cout<<"inorder:";t.inorder(root);cout<<"\n";
    cout<<"preorder:";t.preorder(root);cout<<"\n";
    cout<<"postorder:";t.postorder(root);cout<<"\n";
    cout<<"Enter the element to be searched:";
  int n;cin>>n;
  if(t.search(root,n)){
      cout<<"element is found";
  }
  else
  cout<<"element is not found";
return 0;
}