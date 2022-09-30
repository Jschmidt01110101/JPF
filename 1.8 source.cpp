#include <stdio.h>
main()
{
	int ScoreOne,
	ScoreTwo;
	float average,
	total;
	
	printf("What is the first score?");
	scanf("%d", &ScoreOne);
	
	printf("What is the second score?");
	scanf("%d", &ScoreTwo);
	
	total = ScoreOne + ScoreTwo;
	average = total / 2;
	
	printf("My scores were %d and %d, ScoreOne, ScoreTwo");
	printf("\nMy average grade was %f", average);
	
	if (average >= 65)
	
	{printf("\nYou passed");}
	else
	{printf("\nYou failed");}
}
