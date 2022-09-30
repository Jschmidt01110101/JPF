#include <stdio.h>

void printScores(float scores[6]); // Function prototype

int main() {

char s_name[] = "ECPI University"; // assign name

float scores[6] = {78.7,98.4,100.0, 96.5, 100.0, 88.8}; // Assign scores to array

float average = 0.0; // Initialize array with 0

int counter; // Declare variable counter

printScores(scores); // calling function and pass array

for(counter=0;counter<6;counter++) // Loop to calculate the average

{

average+=scores[counter]; // Calculate sum of array elements

}

average /= 6; // calculate average

printf("At %s, your class average is %.1f.",s_name,average); // print name and average

return 0;

}

void printScores(float scores[6]){ // called function

int counter;

printf("Here are your scores:\n");

for(counter=0; counter < 6; counter++) // Loop to print scores

{

printf("%.1f\n", scores[counter]); // print the scores with one decimal point

}

return;

}
