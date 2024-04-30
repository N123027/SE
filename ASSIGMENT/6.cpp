#include<stdio.h>
int main(){
	
	// variable declaration
	
	int a,b,c=0;
	
	printf("enter your first velue:");
	scanf("%d",&a);
	
	printf("enter your second velue:");
	scanf("%d",&b);
	
	c=a/b;
	
	printf("division of %d and %d is %d",a,b,c);
	
	c=a%b;
	
	printf("modulo of %d and %d is %d",a,b,c);
}
