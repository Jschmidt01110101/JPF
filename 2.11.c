#include <stdio.h>

int main()
{
//declare variables
   int num,square,cube;
  
   //Read number
   printf("Enter a number : ");
   scanf("%d",&num);
   //If condition to check
   if(num>1)
   {
   square=num*num;
   cube=square*num;
   printf("Square : %d \n Cube : %d ",square,cube);
   }
   else
   {
   //Error
   printf("The number should be greater than 1");
   }
   return 0;
}
