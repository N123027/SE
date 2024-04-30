#include<stdio.h>
int main(){
	
	int emp_no,basic_salary,bonus,pt,salary;
	
	printf("\n enter your emp_no:");
	scanf("%d",&emp_no);
	
	printf("\n enter your basic_salary:");
	scanf("%d",&basic_salary);
	
	printf("\n enter your bonus:");
	scanf("%d",&bonus);
	
	printf("\n enter your pt:");
	scanf("%d",&pt);

    salary=(basic_salary+bonus)-pt;
    
    printf("your salary is %d",salary);
		

	

}

