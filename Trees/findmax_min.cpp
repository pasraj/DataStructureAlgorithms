#include <cstdio>

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

int findMin(Bstnode* root){
    Bstnode* current = root;
    if (root== nullptr) {
        printf("Tree is Empty \n");
        return -1;
    }
    while(current->left!= nullptr){
        current = current->left;
    }
    return current->data;
}

int findMax(Bstnode* root){
    Bstnode* current = root;
    if (root== nullptr) {
        printf("Tree is Empty \n");
        return -1;
    }
    while(current->right!= nullptr){
        current = current->right;
    }
    return current->data;

}

int main(){
  Bstnode* root = nullptr;
  root = Insert(root,15);
  root = Insert(root,10);
  root = Insert(root, 20);
  root = Insert(root,25);
  root = Insert(root,8);
  root = Insert(root, 12);

  printf("min is : %d\n",findMin(root));
  printf("max is : %d\n",findMax(root));
}