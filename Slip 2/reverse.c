/* Write a program to display command line arguments in reverse order
    5 marks
*/

#include<stdio.h>
#include<string.h>

void main(){
    char str[100];
    int n;
    printf("Enter Arguments: ");
    gets(str);
    n = strlen(str);

    strrev(str);
    puts(str);
}

// scanf or printf can be used insted of gets & puts