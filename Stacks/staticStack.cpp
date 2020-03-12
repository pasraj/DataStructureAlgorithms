#include <cstdio>
#define capacity 5

int stack[capacity];
int top=-1;

void push(int data);
void pop();
void display();

int main(){
    bool condition = true;
    while(condition){
        int n;
        printf("\n1.push \n2.pop \n3.Display\n4.Exit\n");
        printf("Enter your choice :");
        scanf("%d",&n);

        switch (n){
            case 1:printf("\nEnter the number to insert data in Stack :");
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
    if(top==-1){
        printf("\nQueue is Empty");
    } else{
        printf("\nQueue list is given :");
        for(int i = 0;i<=top;i++){
            printf("%d  ", stack[i]);
        }
    }
}

void push(int data) {
    if (top==capacity-1){
        printf("\nStack is full.\n");
    } else{
        top++;
        stack[top] = data;
        printf("\nInserted data is :%d\n",data);
    }
}
void pop() {
    if (top == -1)
        printf("\nStack is Empty.");
    else {
        printf("\nDeleted number is %d\n", stack[top]);
        top--;
    }
}