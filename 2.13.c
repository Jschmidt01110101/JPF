#include <stdio.h>

void main()
{
   printf("\nWhat is your age? ");
   int age;
   scanf_s("%d", &age);

   for (int i = 1;i <= 25;++i)
   {
       printf("\nHappy Birthday! (year %d)", i);
   }
}
