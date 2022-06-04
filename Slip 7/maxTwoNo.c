/*Write a C program to find maximum of two numbers using macro
    5 marks
*/

#include<stdio.h>
#define MAX(a,b) ((a>b)?a:b)

void main(){
    int a, b, max;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    max= MAX(a,b);
    printf("Max: %d\n", max);

}
