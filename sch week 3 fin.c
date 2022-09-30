#include <stdio.h>

int add(int x, int y);
int square(int y); 

int main()
{
	int a, b;
	int sum; 
	
	printf("Enter the first number: ");
	scanf("%d", &a);
	
	printf("Enter the second number: ");
	scanf("%d", &b);
	
	sum = add(a, b);
	printf("The sum of two numbers is: %d \n", sum);
	
	printf("the value stored in the variable sum is: %d \n", sum);
	
	return 0;
	
}
int add(int x, int y)
{
	return x + y;
}
