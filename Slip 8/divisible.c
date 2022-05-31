#include<stdio.h>

void main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if(n % 3 == 0 && n % 5 == 0)
        printf("%d is divisible by 3 & 5",n);

    else
        printf("%d is not divisible by 3 & 5",n);
}
