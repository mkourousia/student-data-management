#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "vars.h"
#include "insert-student.c"
#include "print.c"
#include "update-student.c"

int main() {

    int choice;
    char name[NAME_SIZE];
    int passed_courses;
    int AM;
    student *st = NULL; 
    
    // st = (struct Node*) malloc(sizeof(struct Node));

   printf("Welcome to student management program! \n\n");
   do {
        printf("Please enter the correspondng number for the action you would like to take:");
        printf("\n\n1. Insert a new student in department") ;
        printf("\n\n2. Present a student's data given the AM");
        printf("\n\n3. Update a student's passed courses given the AM");
        printf("\n\n4. Present all students' data");
        printf("\n\n5. Exit student management program\n\n");
        
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Please insert student's full Name\n\n");
                scanf("%s", name);
                append(&st, name);
                break;
            case 2:
                printf("Please insert student's AM\n\n");
                scanf("%d", &AM);
                printStudent(st, AM);
                break;
            case 3:
                printf("Please insert student's AM\n\n");
                scanf("%d", &AM);
                printf("Please insert the number of courses passed\n");
                scanf("%d", &passed_courses);
                updateCourses(st, AM, passed_courses);
                break;
            case 4:
                puts("All students data \n\n");
                printList(st);
                break;
            case 5:
                puts("Exiting program...\n");
                exit(1);
            default:
                puts("No such choice found");
        }
   } while(1);

   return 0;

}