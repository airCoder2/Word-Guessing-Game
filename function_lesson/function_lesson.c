
#include <stdio.h>



int add_two_number(int number1, int number2){

    int result = number1 + number2;

    return result;
}

int square(int a){

    int result = a * a;
    return result;

}



int main(){

     
    int square_result = square(7);

    printf("result: %d\n", square_result);
 

    return 0;
}