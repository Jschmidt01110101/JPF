#include<stdio.h>

int main()

{

int age;

printf("\nWhat is your age?");

scanf("%d",&age);

if(age>=18)

printf("\nYou're old enough to vote because you're age is %d",age);

else

printf("\nYou're too young to vote");

return 0;

}
