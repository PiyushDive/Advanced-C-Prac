#include<stdio.h>

int digitSum(int n){
    int digit, sum=0;
    while(n>0){
        digit = n%10;
        sum = sum + digit;
        n=n/10;
    }
    return sum;
}

void main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Sum: %d\n", digitSum(n));
}
