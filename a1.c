#include <stdio.h>
/******************************************************************************
a1.c modified to use %s, %c, %d, %p and \n in printf

`int` is a data type which stores whole numbers 
- int i

`char` is a byte storing a single ASCII value like '?' or 63
- char character

C does not have a String type to easily create string variables. 
- Instead, you must use the char type and create an array of characters.
- char characters[]
- char string[]

`for` loop loops through a block of code a number of times.
- for(i=0;i<=7;i++)

printf() Shenanigans

%s  The char * argument is expected to be a pointer to an array of character 
    type (pointer to a string).  Characters from the array are written up to 
    (but not including) a terminating NUL character; if a precision is 
    specified, no more than the number specified are written.  If a precision 
    is given, no null character need be present; if the precision is not 
    specified, or is greater than the size of the array, the array must contain
    a terminating NUL character.
%c  The int argument is converted to an unsigned char, and the resulting 
    character is written.
%d  Transfer integer data, w is the total width, m is the minimum number of 
    non-blank digits. There is no difference between the lowercase and 
    uppercase forms. The %d forms are identical to the %i forms and are 
    provided for programmers familiar with C's printf.
%p  The void * pointer argument is printed in hexadecimal 
\n  The ASCII value 10 represents the Line Feed (LF) control character, often 
    shown as `\n`, used to start a new line in text

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
    int i;
    char character = 63;  // could have been = '?'
    char characters[] = "Hello, is there anybody in there";
    printf("%s%c\n\n",characters,character);

    // String Shenanigans
    char string[]="String";
    printf("|string[]     | string[0]=%c | string[1]=%c | string[2]=%c | string[3]=%c | string[4]=%c | string[5]=%c | string[6]=\\0|\n",
                  string[0], 
                    string[1], 
                        string[2], 
                            string[3],
                                string[4],
                                    string[5]
    );

    for(i=0;i<=7;i++)
         printf("|:-----------:");
    printf("|\n");

    printf("|decimal      |%8d     |%8d     |%8d     |%8d     |%8d     |%8d     |%8d     |\n",
                  string[0], 
                    string[1], 
                        string[2], 
                            string[3],
                                string[4],
                                    string[5],
                                        string[6] 
    );
    printf("|address      |%12p |%12p |%12p |%12p |%12p |%12p |%12p |\n",
                  (void*)&string[0], 
                    (void*)&string[1], 
                        (void*)&string[2], 
                            (void*)&string[3],
                                (void*)&string[4],
                                    (void*)&string[5],
                                        (void*)&string[6] 
    );
    return 0;
}
