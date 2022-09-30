#include <stdio.h>

int main() {
	
	int score1, score2, total; /*Your scores and totaL/sum of the grades */
	float average;			   /*Used to calculate score average*/
	
	printf("Please enter your first grade: ");
	scanf("%d",&score1);
	printf("Please enter your second grade: ");
	scanf("%d",&score2);
	
	total=score1+score2; /*Calculate total score*/
	average=total/2.0; /*Calculate average*/
	
	printf("My grades were %d and %d and my class average was %5.2f", score1, score2, average);
	
	return 0;
}
