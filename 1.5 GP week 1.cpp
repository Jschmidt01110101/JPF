#include <stdio.h>

int main()
{
	int myNumber;
	int myAnswer;
	printf("Enter a number.");
	scanf("%d",&myNumber);
	myAnswer = myNumber * 10;
	printf("Your number times 10 equals: ");
	printf("%d",myAnswer);
	printf(".");
	return 0;
}
