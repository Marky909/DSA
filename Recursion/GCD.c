#include<stdio.h>
#include<conio.h>
int gcd(int,int);
int main(){
	int a,b;
	printf("enter two number: ");
	scanf("%d%d",&a,&b);
	printf("The GCD of %d and %d is %d",a,b,gcd(a,b));
	return 0;
}
int gcd(int x,int y){
	if(y==0)
	 return x;
	else
	 return gcd(y,x%y);
}