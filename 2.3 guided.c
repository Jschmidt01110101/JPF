	#include <stdio>
	main()
	{
		int age;
		
		printf("\nwhat is the student's age? ");
		scanf(" %d", &age);
		
		if (age < 10)
		{
			printf("*** The age cannot be less than 10 ***\n");
			printf("Try again...\n\n");
			printf("What is the student's age? '");
			scanf(" %d, &age");
		}
		
		printf("Thank you. You entered a valid age.");
		return;
	}
