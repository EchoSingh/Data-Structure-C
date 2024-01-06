#include <stdio.h>
#include <stdlib.h>

struct student {
    int rollno;
    char name[10];
    int age;
};

int main() {
    int i;
    struct student s[5]; 

    printf("Enter Students Detail\n");
    
    for (i = 0; i < 5; i++) {
        printf("Enter the rollno of student:\n");
        scanf("%d", &s[i].rollno);

        printf("Enter the name of student:\n");
        scanf("%s", s[i].name);

        printf("Enter the age of student:\n");
        scanf("%d", &s[i].age);
    }

    printf("The student 2 details are:\n");

   
        printf("Rollno of student: %d\n", s[1].rollno);
        printf("Name of student: %s\n", s[1].name);
        printf("Age of student: %d\n", s[1].age);
    

    return 0;
}

