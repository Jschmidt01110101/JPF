#include<stdio.h>

int main()

{

int age[6],i;

for(i=0;i<6;i++)

{

printf("\nEnter the age:");

scanf("%d",&age[i]);

}

for(i=0;i<6;i++)

printf("My friend's age is %d\n",age[i]);

return 0;

}
