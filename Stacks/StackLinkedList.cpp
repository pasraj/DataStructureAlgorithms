#include <cstdio>

struct Node{
    int data;
    Node* next;
};
void push(int data);
void pop();
void display();

Node* newNode(int data){
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = nullptr;
    return newnode;
}
Node* first = nullptr;
Node* last = nullptr;

int main(){
    bool condition = true;
    while(condition){
        int n;
        printf("\n1.push \n2.pop \n3.Display \n4.Exit\n");
        printf("Enter your choice :");
        scanf("%d",&n);

        switch (n){
            case 1:printf("Enter the number to insert data in Stack :");
                int data;
                scanf("%d", &data);
                push(data);
                break;

            case 2: pop();
                break;

            case 3:display();
                break;
            case 4:condition = false;
                break;
            default:printf("\nwrong input\n");
                break;
        }
    }
}

void display() {
    Node* temp = first;
    if (first == nullptr){
        printf("\nStack is Empty \n");
    } else{
        printf("\nElements of Stack is given below\n");
        while (temp!= nullptr){
            printf("%d\t",temp->data);
            temp = temp->next;
        }
    }

}

void pop() {
    Node* localfirst = first;
    if (first== nullptr){
        printf("\nStack is Empty.\n");
    } else if(first->next==nullptr){
        first = last = nullptr;
        delete localfirst;
    } else{
        while(localfirst->next->next!=nullptr){
            localfirst=localfirst->next;
        }
        last = localfirst;
        last->next= nullptr;
        delete localfirst->next;
    }
}
void push(int data) {
    Node* temp = newNode(data);
    if (first==nullptr){
        first = last = temp;
        printf("%d is added in the Stack:",temp->data);
    } else{
        last->next = temp;
        last = temp;
        printf("%d is added in the Stack:",temp->data);
    }
}