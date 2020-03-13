#include <cstdio>
struct Bstnode{
    int data;
    Bstnode* left;
    Bstnode* right;
};

Bstnode* GetnewNode(int data){
    auto* newNode = new Bstnode();
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

void Inorder(Bstnode *root) {
    if(root==nullptr)
        return;;
    Inorder(root->left);
    printf("%d\t",root->data);
    Inorder(root->right);
}

void Postorder(Bstnode *root) {

    if (root==nullptr) return;

    Postorder(root->left);
    Postorder(root->right);
    printf("%d\t",root->data);

}

void Preorder(Bstnode *root) {
    if(root==nullptr) return;
    printf("%d\t",root->data );
    Preorder(root->left);
    Preorder(root->right);
}

int main(){
    Bstnode* root = nullptr;
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root, 20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root, 12);

    printf("\nPre-Order :"); Preorder(root);
    printf("\nIn-Order  :"); Inorder(root);
    printf("\nPost-Order:");Postorder(root);
}
