
#include <stdio.h>
#include <ctype.h>
main()
{
	char initial;
	printf("What is your first inital? ");
	scanf(" %c", &initial);
	
	while (! isalpha(initial))
	{
		printf("\nThat was not a valid initial! \n");
		printf("nWhat is your first initial? ");
		scanf(" %c", &initial);	
	}
	
	printf("\nThanks!");
	return 0 ;
}
