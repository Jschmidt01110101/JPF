#include<stdio.h>
main(){


   char s_name[]="ECPI University";
   float scores[6]={100.00,100.0,76.0,97.0,72.0,86.7};
   float average=0.0;
   int counter;
  
   /*compute total of scores*/
   for(counter=0;counter<6;counter++){


       //calculate the sum
       average+=scores[counter];


   }
  
   /*computer the average */
   //sum/total=average
   average/=(float)6;
  
   printf("At %s, your class average is %.1f.",s_name,average);
   return 0;


}
