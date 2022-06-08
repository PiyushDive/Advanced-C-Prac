#include <stdio.h>

struct employee{
    int eno;
    char ename[20];
    float salary;
};

void display(struct employee *emp, int n){
    for(int i=0; i<n; i++){
        if (emp[i].salary > 10000){
            printf("%d\n", emp[i].eno);
            printf("%s\n", emp[i].ename);
            printf("%f\n", emp[i].salary);
        }
    }
}

void main(){
    struct employee emp[100];
    int n;
    printf("Enter limit: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){

        printf("Enter no: ");
        scanf("%d", &emp[i].eno);
        printf("Enter name: ");
        scanf("%s", &emp[i].ename);
        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);
        printf("\n");
    }

    display(emp, n);
}