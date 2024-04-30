#include<stdio.h>
int main(){
	
	//variable declaration 
	
	int rollno,eng,sci,mat;
	float avg;
	char grade;
	
	printf("enter your roll no:");
	scanf("%d",&rollno);
	
	printf("\n enter your english marks:");
	scanf("%d",&eng);
	
	printf("\n enter your scince marks:");
	scanf("%d",&sci);
	
	printf("\n enter your maths marks:");
	scanf("%d",&mat);
	
	avg=(eng+sci+mat)/3;
	
	printf("\n enter students grade:");
	scanf(" %C",&grade);
	
	printf("\n rollno:%d avrage:%f grade:%c,",rollno,avg,grade);
}
