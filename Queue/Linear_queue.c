#include<stdio.h>
#include<conio.h>
#define MAX 5
int rear = -1;
int front = 0;
int queue[MAX];
void enqueue();
void dequeue();
void display();
int main(){
    while(1){
        printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        int choice;
        printf("enter the choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("exiting from main program!!!!\n");
            return 1;
            default:
            printf("incorrect choice !please enter the choice between(1-4)\n");
            break;
        }
    }
}
void enqueue(){
    if(rear==MAX-1){
        printf("circular queue is full!!!");
        return ;
    }
    else{
    int item;
    printf("Enter the item you wanna insert: ");
    scanf("%d",&item);
    queue[++rear]=item;
    printf("%d inserted in position %d\n",item,rear);
}
}
void dequeue(){
    if(front>rear){
        printf("circular queue is empty!!!\n");
        return ;
    }
    int item = queue[front];
    printf("%d deleted from position %d\n",item,front);
    front--;
}
void display(){
    int i;
   if(front>rear){
        printf("circular queue is empty!!!\n");
        return ;
    }
    printf("Displaying the element of queue : \n");
    for( i = front ;i<=rear;i++){
        printf("%d\t",queue[i]);
    }
   
}