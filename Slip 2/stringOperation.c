/* Write a menu driven program to perform the following operations on the string using standard library functions:
    1. Convert string to uppercase
    2. Copy one string to another
    3. Comapre two strings
    4. Conatenate two strings

    15 marks
*/

#include<stdio.h>
#include<string.h>

void main(){
    char str1[100], str2[100];
    int ch, a;
    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    scanf("%s", str2);
    printf("\n");

    printf("Enter choice: \n");
    printf("1. Uppercase\n2. Copy\n3. Compare\n4. Concatenate\n");
    scanf("%d", &ch);

    switch(ch){
        case 1:
            // Convert string to uppercase
            strupr(str1);
            strupr(str2);
            printf("%s %s\n", str1, str2);
            break;
        
        case 2:
            // Copy one string to another
            strcpy(str1, str2);
            puts(str1);
            break;

        case 3:
            // Comapre two strings
            a = strcmp(str1, str2);
            if (a > 0)
                printf("%s is bigger than %s.\n", str1, str2);

            else if (a < 0)
                printf("%s is bigger than %s.\n", str2, str1);

            else
                printf("Both strings are equal.\n");
            break;

        case 4:
            // Conatenate two strings
            strcat(str1, str2);
            puts(str1);
            break;
        
        default:printf("Invalid choice\n");
    }
}
