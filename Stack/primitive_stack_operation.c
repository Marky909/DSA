#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAXSIZE 5
int stack[MAXSIZE];
int top = -1;
void push();
void pop();
void display();
int main(){
    while(1){
        int choice;
        printf("1.push()\n2.pop()\n3.display()\n4.exit()\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
             push();
             break;
            case 2:
             pop();
             break;
            case 3:
             display();
             break;
            case 4:
             printf("Exiting from the program!!!!\n");
             return 1;
            default:
             printf("Enter the choice between(1-4)\n");
             break;
        }
    }
    return 0;
}
void push(){
    if(top==MAXSIZE-1){
        printf("Stack is full brother!!! also called underflow brother\n");
        return ;
    }
    else{
        int item;
        printf("Enter the value you wanna push on stack:");
        scanf("%d",&item);
        stack[++top]=item;
        printf("%d inserted in the top of stack at position %d\n",item,top);
    }
}
void pop(){
    if(top<0){
        printf("stack underflow brother!!!!\n");
        return ;
    }
    else 
    {
        int item=stack[top];
        printf("%d removed from position %d\n",item,top);
        top--;
    }
}
void display(){
    if(top<0){
        printf("stack underflow brother!!!!\n");
        return ;
    }
    else{
        printf("Displaying the elemnt of the stack\n");
        for(int i = 0;i<=top;i++){
            printf("%d\t\n",stack[i]);
        }
    }
}