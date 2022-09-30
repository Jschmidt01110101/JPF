//James Schmidt 5.6//

#include <stdio.h>
#include <ctype.h>
int main(void){
   printf("Enter a character: ");
   int c = getchar();
   if(isdigit(c) == 0){
       printf("User has entered the character: %c\n", c);
       printf("isalnum(\'%c\') = %d\n", c, isalnum(c));
       printf("isxdigit(\'%c\') = %d\n", c, isxdigit(c));
       printf("islower(\'%c\') = %d\n", c, islower(c));
       printf("isupper(\'%c\') = %d\n", c, isupper(c));
       printf("tolower(\'%c\') = %d\n", c, tolower(c));
       printf("toupper(\'%c\') = %d\n", c, toupper(c));
       printf("isspace(\'%c\') = %d\n", c, isspace(c));
       printf("iscntrl(\'%c\') = %d\n", c, iscntrl(c));
       printf("ispunct(\'%c\') = %d\n", c, ispunct(c));
       printf("isprint(\'%c\') = %d\n", c, isprint(c));
       printf("isgraph(\'%c\') = %d\n", c, isgraph(c));
   }
   return 0;
}
