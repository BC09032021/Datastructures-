#include <bits/stdc++.h>

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

class Solution {
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

    int height(Node* root) {
        if(root==NULL)
            return -1;
        else
            return max(height(root->left),height(root->right))+1;
    }

}; 

int main() {
  
    Solution myTree;
    Node* root = NULL;
    cout<<"Enter number of nodes:";
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        cout<<"Enter data:";
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    int height = myTree.height(root);
    
  	std::cout << "Height of the tree is:"<<height;

    return 0;
}
