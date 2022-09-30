#include<stdio.h>

void firstFunction(int counter);

void secondFunction();

void thirdFunction();

int main(){

int counter;

for(counter=1; counter<=5; counter++){

firstFunction(counter);

}

thirdFunction();

return 0;

}

//******************************************************************

void firstFunction(int counter){

printf("This is the first function and call number %i\n", counter);

secondFunction();

return;

}

//******************************************************************

void secondFunction(){

printf("This is printed from the secondFunction, which takes no arguments\n\n");

return;

}

//******************************************************************

void thirdFunction(){

printf("And this is printed from the thirdFunction, which also does not take any arguments\n\n");

return;

}
