#include<stdio.h>
//function that return the grade
char calcGrade(float num){
   if(num>=9)
       return 'A';
   else if(num>=8)
       return 'B';
   else if(num>=7)
       return 'C';
   else if(num>=6)
       return 'D';
   else
       return 'F';
}
int main(){
   float num;
   //take the numeric grade score as input
   printf("enter the grade : ");
   scanf("%f",&num);
   //pass the num value in calcGrade() function to calculate the grade
   char ch=calcGrade(num);
   //print the grade
   printf("%c",ch);
}
//James//schmidt
