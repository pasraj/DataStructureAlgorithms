#include <cstdio>
#include <queue>

struct Bstnode{
    int data;
    Bstnode* left;
    Bstnode* right;
};
Bstnode* GetnewNode(int data){
    Bstnode* newNode = new Bstnode();
    newNode->data = data;
    newNode->left = nullptr;
    (*newNode).right = nullptr;
    return newNode;
}

Bstnode* Insert(Bstnode* root,int data){
     if(root== nullptr){
         root = GetnewNode(data);
         return root;
     } else if(data<=root->data) {
         root -> left = Insert(root->left,data);
     } else{
         root -> right = Insert(root->right,data);
     }
    return root;
}

void leverOrderTraversal(Bstnode* root){
    if(root== nullptr) return;
    std::queue<Bstnode*> Q;
    Q.push(root);

    while (!Q.empty()){
        Bstnode* current = Q.front();
        printf("%d ",current->data);
        if (current->left!= nullptr) Q.push(current->left);
        if (current->right!=nullptr) Q.push(current->right);
        Q.pop();
    }
}

int main(){
  Bstnode* root = nullptr;
  root = Insert(root,15);
  root = Insert(root,10);
  root = Insert(root, 20);
  root = Insert(root,25);
  root = Insert(root,8);
  root = Insert(root, 12);

  leverOrderTraversal(root);
}