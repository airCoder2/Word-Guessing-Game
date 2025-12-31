#include <stdio.h>

/**
 * Student
 * name  ("Ahmad","Ali")  string
 * age   (12, 13, 14, 15) integer
 * class (1, 2, 3, 4, 5)  integer
 * grade ('A','B','C')    char
 * time  (12.45, 1,55)    float
 */

struct Student
{
    char name[32]; // 32 aytyapmiz: bizga sen 32 ta character sig'adigan joy ber va osha joyni ismini name deb ata
    int age;       // 4
    int class;     // 4
    char grade;    // 1
    float time;    // 4
};

int main()
{
    /** FlOATNI JOYINI QANCHA JOY OLISHINI TEKSHIRISH UCHUN
     * float variableni qancha byte olishini tekshirish uchun qilgan ishlarimiz:
     * 1. our_size degan 1ta integer saqlay oladigan memorydan joy ochtik
     * 2. test degan 1ta float saqlay oladigan memorydan joy ochtik
     * 3. osha our_size degan 4ta byte sigda oladigan joyni ichiga test variablni memorydan nechta bayt olganligini qoydik
     */

    /** STRUCT STUDENTNI QANCHA JOY OLISHINI TEKSHIRISH UCHUN
     * struct Student qancha bayt olishini tekshirmoqchimiz
     * 1. our_size degan 1ta integer saqlay oladigan memorydan joy ochtik
     * 2. test degan 1ta struct Studentni sigdra oladigan memorydan joy ochamiz
     * 3. osha our_size degan 4ta bayt oladigan joyni ichiga test degan variable memorydan nechta bayt olganligini qoyamiz.
     */

    int our_size;
    struct Student test;
    our_size = sizeof(test);

    printf("%d\n", our_size);

    return 0;
}
