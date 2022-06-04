/* Write a program to display contents of file "a.txt" on the screen
    10 marks
*/

// first create file "a.txt" & then run program

#include<stdio.h>

void main(){
    FILE *fptr;
    fptr = fopen("a.txt", "r");
    char ch;
    ch  = fgetc(fptr);
    while(ch != EOF){
        ch  = fgetc(fptr);
        printf("%c", ch);
    }
    printf("\n");

    fclose(fptr);
}
