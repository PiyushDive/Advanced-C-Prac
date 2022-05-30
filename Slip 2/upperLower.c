#include<stdio.h>
void main(){
    char a;
    printf("Enter Character: ");
    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z'){
        printf("%c is a uppercase character\n",a);
    }
    else if (a >= 'a' && a <= 'z'){
        printf("%c is a lowercase character\n",a);
    }
    else
        printf("Invalid character\n");
}