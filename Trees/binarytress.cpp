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

bool Seach(Bstnode* root,int data){
    if(root==nullptr) return false;
    else if(root->data == data) return true;
    else if(data<=root->data) return Seach(root->left,data);
    else return Seach(root->right,data);
}

int main(){
  Bstnode* root = nullptr;
  root = Insert(root,15);
  root = Insert(root,10);
  root = Insert(root, 20);
  root = Insert(root,25);
  root = Insert(root,8);
  root = Insert(root, 12);

  int number;
  printf("Enter the number to search\n");
  scanf("%d",&number);
  if(Seach(root, number))
      printf("found\n");
  else printf("not Found\n");
}