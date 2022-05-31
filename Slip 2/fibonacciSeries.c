/* write a 'C' program to display n terms of fibonacci series
    10 marks
*/

#include<stdio.h>
void main(){
    int n;
    int t1 = 0, t2= 1, t3=0;
    printf("Enter limit: ");
    scanf("%d", &n);
    printf("\n%d %d ", t1, t2);

    for(int i=2; i<n; ++i){
        t3 = t1 + t2;
        printf("%d ", t3);
        t1 = t2;
        t2 = t3;
    }
}