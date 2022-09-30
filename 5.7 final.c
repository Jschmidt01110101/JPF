#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float adult[4], child[3]; 
float totalAdult = 0,totalChild = 0, total = 0; 
float donation; 
int i,j;
printf(" Family Dinner Catering Service ordering window: PLease confirm selection of the following\n \n") ; 
printf( "Meal Sales for Adults: \n"); 
for(i = 0; i < 4; i++)
{
	
 printf("Adult Catered Meal Prices: $"); 
 scanf("%f",&adult[i]);
  totalAdult = totalAdult + adult[i];
} 
  printf(" \n Total Adult Catered Meal Prices are $ %f \n" , totalAdult); 
 printf(" \n Meal Sales for Children: \n"); 
 for(j = 0; j < 3; j++)
 {
  printf("Child Catered Meal Prices: $");
   scanf("%f",&child[j]);
   totalChild = totalChild + child[j]; } 
 printf("Total Child Ticket sales are $ %f \n" , totalChild);
  total = totalAdult + totalChild;
   printf(" \n Total Cost for Catered Meals are $ %f \n" , total); 
	donation = (total * 45) / 100;
 printf("The total donation for Charity is $ %f", donation); 


}
