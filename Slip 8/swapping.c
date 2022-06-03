/* Write a C program to interchange two numbers using pointers
    5 marks
*/

#include<stdio.h>
void main(){
    int x, y, *a, *b;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    a = &x;
    b = &y;
    printf("Before swapping: %d %d\n", *a, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping: %d %d\n", *a, *b);

}

// interchange means swapping
