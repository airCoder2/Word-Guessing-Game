#include <stdio.h>

/**
 * Make a function called grade_convertor() that takes a grade, (for example 5, 4, 3, 2)
 * and convert it to letter grade like:
 * 5 -> A
 * 4 -> B
 * 3 -> C
 * 2 -> D
 * 1 -> F
 */

/**
 * 1. funksiya nima argument oladi my_function(ARGUMENT)
 * 2. funkisya nima qaytaradi? Somni? INT my_funciton(ARGUMENT) Harfmi? CHAR my_function(ARGUMENT)
 */

char grade_convertor(int my_number_school_grade)
{
    char my_letter_school_grade;

    if (my_number_school_grade == 5)
    {
        my_letter_school_grade = 'A';
    }
    else if (my_number_school_grade == 4)
    {
        my_letter_school_grade = 'B';
    }
    else if (my_number_school_grade == 3)
    {
        my_letter_school_grade = 'C';
    }
    else if (my_number_school_grade == 2)
    {
        my_letter_school_grade = 'D';
    }
    else if (my_number_school_grade = 1)
    {
        my_letter_school_grade = 'F';
    }

    return my_letter_school_grade;
}

int main()
{
    int my_number_school_grade = 4;
    char my_letter_school_grade;

    my_letter_school_grade = grade_convertor(3);
    printf("debug %c:\n", my_letter_school_grade);

    printf("my grade in number is: %d, in letter is: %c\n", my_number_school_grade, my_letter_school_grade);

    return 0;
}
