#include <stdio.h>

int add(int x, int y);
int Special1(int a); 

int main()
{
	int a, b;
	int sum; 
	int num1;
	int num2;
	
	printf("Use this program to determine if youre hydrated or not throughout the day   : ");
	 
	printf("Enter how many cups of water did you have before 12:00 PM : "); 
	scanf("%d", &a);  
	
	printf("Enter how many cups of water did you have after 12:00 PM: ");
	scanf("%d", &b); 
	
	sum = add(a, b); 
	printf("The amount of water you drank before and after 12 was  : %d \n", sum); 
		
	num1 = special1(a);	
	return 0;
	
}

int add(int x, int y)  
{
	return x + y;
}

int special1(int a) 
{
	if(a > 15 ) { 
		
		printf("You're hydrated , keep it up and your body will thank you later ");
	}
	else if(a < 15) { 
		
		printf("You may be dehydraated, Please drink more water");
	}
	return;
}


