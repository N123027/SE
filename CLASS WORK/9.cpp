#include<stdio.h>

int main(){
	
	int a,b,ans,no;
	
	char choice;
	
	printf("\n -----------menu----------------");
	
	printf("\n 1.addition (+)");
	
	printf("\n 2.substrection (-)");
	
	printf("\n 3.multification (*)");
	
	printf("\n 4.division (/)");
	
	printf("\n 5.modulo (%)");
	
	printf("\n enter your choice:");
    scanf("%c",&choice);
    
    printf("\n enter option number");
    scanf("%d",&no);
    
    printf("\n enter your first choice:");
    scanf("%d",&a);
    
    printf("\n enter your second choice:");
    scanf("%d",&b);
    
    if(choice== '+'&& no==5){
    	ans=a+b;
    }
    
    if(choice== '-'&& no==4){
	     ans=a-b;	
    }
    
    if(choice== '*'&& no==3){
    	ans=a*b;
	}
    
    if(choice== '/'&& no==2){
    	ans=a/b;
	}
	
	if(choice== '%'&& no==1){
		ans=a%b;
	}
	
	printf("\n your ans is %d",ans);
	} 

