/*Write a C program to store the squares of number 1 to n in "squares.txt" file
    10 marks
*/

#include <stdio.h>
void main(){
    FILE *fptr;
    fptr = fopen("squares.txt", "w");

    int n, square;
    printf("Enter number: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        int square = i * i;
        fprintf(fptr, "%d ", square);
    }
    fclose(fptr);
}
