#include <stdio.h>
/******************************************************************************
a1.c modified to use %s, %c, %d, %i, %p and \n in printf

`int` is a data type which stores whole numbers 
- int i

`char` is a byte storing a single ASCII value like '?' or 63
- char character

C does not have a String type to easily create string variables. 
- instead, you must use the char type and create an array of characters.
- char characters[]
- char string[]

`for` loop loops through a block of code a number of times.
- for(i=0;i<=7;i++)

`while` loop repeats a block of code as until a specified condition is meet
- while(string[i] != '\0')

printf() Shenanigans

%s      The char * argument is expected to be a pointer to an array of 
        character type (pointer to a string).  Characters from the array are 
        written up to (but not including) a terminating NUL character; if a 
        precision is specified, no more than the number specified are written.  
        If a precision is given, no null character need be present; if the 
        precision is not specified, or is greater than the size of the array, 
        the array must contain a terminating NUL character.
%c      The int argument is converted to an unsigned char, and the resulting 
        character is written.
%d, %i  The int argument is converted to signed decimal notation. 
        The precision, if any, gives the minimum number of digits that must 
        appear; if the converted value requires fewer digits, it is padded on 
        the left with zeros.  The default precision is 1.  When 0 is printed 
        with an explicit precision 0, the output is empty.
%p      The void * pointer argument is printed in hexadecimal 
\n      The ASCII value 10 represents the Line Feed (LF) control character, 
        often shown as `\n`, used to start a new line in text

The man utility finds and displays online manual documentation pages.
man less
man man
man make
man ascii
man printf
man 3 printf
man 3 stdio
******************************************************************************/

int main(){
    int i =0;
    char character = 63;  // could have been = '?'                           */
    char characters[] = "Hello, is there a s in string[]";
    printf("%s%c\n\n",characters,character);
    // String Shenanigans                                                    */
    char string[]="String";

    // String[] index and character is printed                               */
    printf("|string[]     |");

    while(string[i] != '\0') { 
        printf(" string[%i]=%c |",i,string[i]);
        i++;
    }

    printf(" string[6]=\\0|\n");

    // center-align the column                                               */
    for(i=0;i<=7;i++)
         printf("|:-----------:");
    printf("|\n");

    // String[] decimal is printed                                           */
    printf("|decimal      |");

    for(i=0;i<=6;i++)
        printf("%8d     |",string[i]);
    printf("\n");

    // String[] address is printed                                           */
    printf("|address      |");

    for(i=0;i<=6;i++)
        printf("%12p |",(void*)&string[i]);
    printf("\n");

    return 0;
}
