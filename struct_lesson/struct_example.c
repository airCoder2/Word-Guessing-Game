#include <stdio.h>

/**
 * Student
 * name  ("Ahmad","Ali")  string
 * age   (12, 13, 14, 15) integer
 * class (1, 2, 3, 4, 5)  integer
 * grade ('A','B','C')    char
 * time  (12.45, 1,55)    float
 */

struct Student // bu strcut 45 ta joy olishi kerak
{
    char name[32]; // 32 aytyapmiz: bizga sen 32 ta character sig'adigan joy ber va osha joyni ismini name deb ata
    int age;       // 4
    int class;     // 4
    char grade;    // 1
    float time;    // 4
};

int main()
{


    int our_size;
    struct Student student1;
    struct Student student2;
    struct Student student3;
    struct Student student4;

    student1.age = 15;
    student2.age = 38;

    printf("the age of student 1 is: %d\n", student1.age);
    printf("the age of student 2 is: %d\n", student2.age);

    return 0;
}
