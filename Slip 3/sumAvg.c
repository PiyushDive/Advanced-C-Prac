/*Write a program to allocate memory dynamically for n integers.
Accept the elements and calculate their sum and average. - 10m
    10 marks
*/

#include<stdio.h>
#include <stdlib.h>

void main(){
    int *arr, n , sum = 0, avg = 0;
    int i =0;
    printf("Enter limit: ");
    scanf("%d", &n);
    arr = (int*)calloc(n,sizeof(int));

    printf("Enter elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // sum = arr[i] + arr[i+1];
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    avg = sum/n;
    printf("Sum: %d\n", sum);
    printf("Avg: %d\n", avg);

}
