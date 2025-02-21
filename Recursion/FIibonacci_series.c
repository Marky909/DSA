#include<stdio.h>
#include<conio.h>
int fibo(int);
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("the fibonacci term corresponding to %d is %d\n",n,fibo(n));
    printf("the whole fibonacci term is\n");
    for(int i=0;i<=n;i++){
        printf("%d\t",fibo(i));
    }
    return 0;
}
int fibo(int n){
    if( n == 0)
        return 0;
    else if(n == 1)
     return 1;
    else 
     return fibo(n-1)+fibo(n-2);
}