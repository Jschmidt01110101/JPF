#include<stdio.h>
//function prototype
void printIt(float income);
//function main
int main(){
  
   //variable for income
   float income;
   //prompt for user to enter income
   printf("What is your annual income? ");
   //read income
   scanf("%f",&income);
   //calling function
   printIt(income);
   return 0;
}
//implementation of printIt function
void printIt(float income){
  
   //condition
   if(income>90000){
      
       printf("Congratulations, Doing great!");
   }
   else{
      
       printf("You WILL make $90,000, if you keep going.");
   }
}
