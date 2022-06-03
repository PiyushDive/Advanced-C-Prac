/* Write a C program to count the number of vowels and consonants in a string
    10 marks
*/

#include<stdio.h>
#include<string.h>

void main(){
    char str[100];
    int n, vowel=0, consonant=0;
    printf("Enter String: ");
    scanf("%s", str);
    n = strlen(str);

    for(int i=0; i<n; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vowel++;
        }
        else{
            consonant++;
        }
    }
    
    printf("Total vowels: %d\n", vowel);
    printf("Total consonats: %d\n", consonant);
}
