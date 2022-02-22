#include<iostream>
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
            } else {
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
    
     void inOrder(Node *root) {
            if(root==NULL)
                return;
            inOrder(root->left);
             cout<<root->data<<" ";
            inOrder(root->right);
           
    }
     void preOrder(Node *root) {
            if(root==NULL)
                return;
            cout<<root->data<<" ";
            preOrder(root->left);
            preOrder(root->right);
            
    }


    void postOrder(Node *root) {
            if(root==NULL)
                return;
            postOrder(root->left);
            postOrder(root->right);
            cout<<root->data<<" ";
    }

};
int main(){
    tree myTree;
    Node* root = NULL;
    
    int n;
    int data;
    cout<<"enter no.of nodes:";
    cin >>n;
    while(n-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
    cout<<"InOrder traversal:"
    myTree.inOrder(root);
    cout<<"\npreOrder traversal:"
    myTree.preOrder(root);
    cout<<"\npostOrder traversal:"
	myTree.postOrder(root);
    return 0;
}
