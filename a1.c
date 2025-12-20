#include <stdio.h>
/* a1.c modified to use %s, %c, and \n in printf

a char is a byte storing a single ASCII value like '?' or 63
  - char character

C does not have a String type to easily create string variables. 
  - Instead, you must use the char type and create an array of characters.
  - char characters[]

printf format specifiers and escape sequences

%s  The char * argument is expected to be a pointer to an array of character type (pointer to a
    string).  Characters from the array are written up to (but not including) a terminating NUL
    character; if a precision is specified, no more than the number specified are written.  If
    a precision is given, no null character need be present; if the precision is not specified,
    or is greater than the size of the array, the array must contain a terminating NUL
    character.
%c  The int argument is converted to an unsigned char, and the resulting character is written.
\n  The ASCII value 10 represents the Line Feed (LF) control character, often shown as `\n`, 
    used to start a new line in text

*/

int main(){
    char character = 63;  // could have been = '?'
    char characters[] = "Hello, is there anybody in there";
    printf("%s%c\n",characters,character);
    return 0;
}
