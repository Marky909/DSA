#include<stdio.h>
long int factorial(int);
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("The factorial of %d is %ld",n,factorial(n));
    return 0;
}
long int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}