
	#include <stdio.h>
	main()
	{
		char answer;
		
		printf("Do you want to continue (Y/N)? ");
		scanf(" &c", &answer);		 /* Get user's answer */
		
		while ((answer != 'Y') && (answer != 'N'))
			{ printf("\nYou must type a Y or an N\n");	/* Warn and   */
			  printf("Do you want to continue (Y/N) ?"); /* ask agaiin */
			  scanf(" %c", &answer); }	 /* Body of while loop ends here */
			  
			  return;
	}
