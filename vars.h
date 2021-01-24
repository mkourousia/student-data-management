#define NAME_SIZE 50
#define TOTAL_COURSES 50

typedef struct Student
{
    int AM;
    char name[NAME_SIZE];
    int passed_courses;
    struct Student * next;
} student;