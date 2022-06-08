/* Write a program to declare a structure person (name, address) which
contains another structure birthdate (day, month, year). Accept the details
of n persons and display them. 
    15 marks
*/

#include<stdio.h>

struct person
{
    char name[100];
    char address[200]; 

    struct birthdate
    {
        int day;
        int month;
        int year;
    }b[100];
}p[100];

void main(){
    int n;
    printf("Enter limit: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){

        printf("Enter name: ");
        scanf("%s", &p[i].name);
        printf("Enter address: ");
        scanf("%s", &p[i].address);
        printf("Enter birthdate (dd,mm,yy): ");
        scanf("%d %d %d", &p[i].b[i].day, &p[i].b[i].month, &p[i].b[i].year);
    }

    for(int i=0; i<n; i++){
        printf("\nName: %s\n", p[i].name);
        printf("Address: %s\n", p[i].address);
        printf("Birthdate: %d %d %d\n", p[i].b[i].day, p[i].b[i].month, p[i].b[i].year);
    }
}
