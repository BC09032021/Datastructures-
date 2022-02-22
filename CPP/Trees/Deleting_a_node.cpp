#include <iostream>
using namespace std;
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
class tree{
public:
  Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } 
            else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
    void inorder(Node *root){
        if(root==NULL)
            return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    Node *get_succesor(Node *curr,int x){
        curr=curr->right;
        while(curr!=NULL && curr->left!=NULL){
            curr=curr->left;
        }
        return curr;
    }
    Node *deletenode(Node *root,int x){
        
        if(root==NULL)
            return root;
        else if(x<root->data){
            root->left=deletenode(root->left,x);
        }
        else if(x>root->data){
            root->right=deletenode(root->right,x);
        }
        else{
            if(root->left==NULL){
                Node *temp=root->right;
                delete root;
                return temp;
            }
            else if(root->right==NULL){
                Node *temp=root->left;
                delete root;
                return temp;
            }
            else{
                Node *ssor=get_succesor(root,x);
                root->data=ssor->data;
                root->right=deletenode(root->right,ssor->data);
                
                
            }
            
            
        }
        return root;
    }
    
};
    
int main(){
    tree myTree;
    Node* root = NULL;
    
    int n;
    int data;
    // cout<<"enter no.of nodes:";
    // cin >>n;
    int arr[]={34,54,21,11,23,65,56,12,25};
    n=9;
for(int i=0;i<n;i++){
        root = myTree.insert(root,arr[i]);
    }
    myTree.inorder(root);
    root=myTree.deletenode(root,34);
    cout<<"\n";
    myTree.inorder(root);
    return 0;
}