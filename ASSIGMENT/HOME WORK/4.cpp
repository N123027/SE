#include<stdio.h>
int main(){
	// variable declaration
	
	int amount,interest,years;	
	float p,r,n;
	double i;
	
	printf("\n enter your amount:");
	scanf("%d",&amount);
	
	printf("\n enter your interest:");
	scanf("%f",&interest);
	
	printf("\n enter your years:");
	scanf("%f",&years);
	
	i=(p*r*n)/100;
	
	printf("\n simple interest is:i");
	scanf("%f",&i);
	
	printf("\n amount: %d interest: %d years: %d",amount,interest,years);
	
}
