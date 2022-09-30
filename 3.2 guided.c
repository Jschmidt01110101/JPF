	//unit 3 GP 3.2

	#include <stdio.h>

	void firstFunction();
	void secondFunction();
	int main ()
	{
		printf("Function Demo \n");
		firstFunction();
		secondFunction();
		printf("Main ending\n");
		return 0;
	}
	
	void firstFunction()
	{
		printf("Printing from firstFunction\n");
		return;
	}
	
	void secondFunction()
	{
		printf("Printing from secondFunction");
		return;
	}

