#include <cstdio>

struct Node{
    int data;
    Node* next;
};

void EnQueue(int data);

void Dequeue();

void display();

Node* newNode(int data){
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = nullptr;
    return newnode;
}
Node* front = nullptr;
Node* rear = nullptr;

int main(){
    bool condition = true;
    while(condition){
        int n;
        printf("\n1.Enqueue \n2.Deque \n3.Display\n4.Exit\n");
        printf("Enter your choice :");
        scanf("%d",&n);

        switch (n){
            case 1:printf("Enter the number to insert data in Queue :");
                int data;
                scanf("%d", &data);
                EnQueue(data);
                break;

            case 2: Dequeue();
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
    Node* temp = front;
    if (front== nullptr){
        printf("\nQueue is Empty \n");
    } else{
        printf("\nElements of Queue is given below\n");
        while (temp!= nullptr){
            printf("%d\t",temp->data);
            temp = temp->next;
        }
    }

}

void Dequeue() {
    Node* localfront = front;
    if (front== nullptr){
        printf("\nQueue is Empty.\n");
    } else if(front->next!=nullptr){
        printf("\nDeleted Element is :%d",localfront->data);
        front = rear = nullptr;
        delete localfront;
    } else{
        front = front->next;
        printf("\nDeleted Element is :%d",localfront->data);
        delete localfront;
    }
}
void EnQueue(int data) {
    Node* temp = newNode(data);
    if (front==nullptr){
        front=rear=temp;
        printf("\n%d is added in Queue",rear->data);
    } else {
        rear->next = temp;
        rear = rear->next;
        printf("\n%d is added in Queue",rear->data);
    }
}
