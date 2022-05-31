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
    }b;
}p;

void main(){
    
    printf("Enter name: ");
    scanf("%s", &p.name);
    printf("Enter address: ");
    scanf("%s", &p.address);
    printf("Enter birthdate (dd,mm,yy): ");
    scanf("%d %d %d", &p.b.day, &p.b.month, &p.b.year);
    
    printf("\nName: %s\n", p.name);
    printf("Address: %s\n", p.address);
    printf("Birthdate: %d %d %d\n", p.b.day, p.b.month, p.b.year);

}
