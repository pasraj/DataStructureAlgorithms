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
int max(int x, int y){
    if(x>y)
        return x;
    else{
        return y;
    }

}
int findhieght(Bstnode* root){
    if (root== nullptr){
        return -1;
    } else{
        int lefthieght = findhieght(root->left);
        int righthieght = findhieght(root->right);
        return max(lefthieght,righthieght)+1;
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

  printf("Height of Tree is %d",findhieght(root));

}