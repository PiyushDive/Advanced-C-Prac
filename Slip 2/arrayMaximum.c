#include<stdio.h>
int maximum(int arr[], int n){
    int max = 0;
    for(int i = 0; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

void main(){
    int n;
    int arr[100];
    printf("Enter limit: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("%d\n", maximum(arr, n));
    
}