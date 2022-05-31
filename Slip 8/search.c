#include<stdio.h>

int search(int arr[], int n ,int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

void main(){
    int arr[100], n, key;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Enter number to search: ");
    scanf("%d", &key);
    printf("Enter array elements: ");

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    if(search(arr,n,key))
        printf("%d is present\n", key);

    else
        printf("%d is not present\n", key);

}
