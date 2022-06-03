/* Write a program to calculate length of string using standard library
function.
    5 marks
*/

#include<stdio.h>
#include<string.h>

void main(){
    char str[100];
    printf("Enter String: ");
    gets(str);
    printf("Length: %d\n", strlen(str));
}

// gets is used to input. Use scanf or gets.