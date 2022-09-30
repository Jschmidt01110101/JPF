#include<stdio.h>

	main()
{
   int num,result;
  
   printf("\nPlease enter a number: ");
   scanf("%d",&num);
  
   printf("\nThe Total of number1 is %d\n",num);
   if(num!=0)
   {  
       result=num*num;
   }
   printf("\n%d multiplied by %d is %d\n",num,num,result);
}
