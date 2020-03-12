#include <cstdio>
#define capacity 5

int queue[capacity];
int front=-1;
int rear=-1;

void EnQueue(int data);
void Dequeue();

void display();

int main(){
    bool condition = true;
    while(condition){
        int n;
        printf("\n\n1.Enqueue \n2.Deque \n3.Display\n4.Exit\n");
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
    if(front==-1){
        printf("Queue is Empty\n");
    } else{
        printf("Queue list is given :");
        for(int i = front;i<=rear;i++){
            printf("%d  ", queue[i]);
        }
    }

}

void EnQueue(int data) {
    if (rear==capacity-1){
        printf("Queue is full.\n");
    } else if (front==-1){
        front++;
        rear++;
        queue[rear] = data;
        printf("Inserted data is :%d",data);
    } else{
        rear++;
        queue[rear] = data;
        printf("Inserted data is :%d",data);
    }
}
void Dequeue(){
    if(front==-1)
        printf("Queue is Empty.\n");
    else{
        printf("Delete number is %d",queue[front]);
        for(auto i=0;i<rear;i++){
            queue[i]=queue[i+1];
        }
        if(front==rear){
            front = rear =-1;
        } else
            rear--;
    }
}