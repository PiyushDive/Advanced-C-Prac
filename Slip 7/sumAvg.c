/*Write a C program to accept n elements using dynamic memory allocation and calculate the sum and average of the elements.
    Also find the largest element.
    15 marks
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int *arr, n , sum = 0, avg = 0, max=0;
    int i =0;
    printf("Enter limit: ");
    scanf("%d", &n);
    arr = (int*)calloc(n,sizeof(int));

    printf("Enter elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // largest element
    for(int i =0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    // Sum
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }

    // Avg
    avg = sum/n;

    printf("Sum: %d\n", sum);
    printf("Avg: %d\n", avg);
    printf("Max: %d\n", max);

}
