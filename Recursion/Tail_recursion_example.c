#include<stdio.h>
void  countdown(int);
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    countdown(n);
}
void countdown(int n){
    if(n==0){
        printf("done\n");
    }
    else{
        printf("%d\n",n);
        countdown(n-1);
    }
}