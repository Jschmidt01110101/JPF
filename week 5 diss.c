#include <stdio.h>

int main(void)
{
	puts("Using precision for strings");
	char s[] = "Happy birthday"; //initialize char array s
	printf("\t%.14s\n\n", s);
}
