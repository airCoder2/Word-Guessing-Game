#include <stdio.h>

// a type we are defining to make boxes that have these things indie.
// For example struct Box_that_has_two_numbers_inside my_box would be a box that has a type of struct Number
// That means you could store number_one and number_two inside my_box
// You could do it like this, my_box.number_one = 10; my_box.number_two = 15;
struct Box_that_has_two_numbers_inside
{
	int number_one;

	int number_two;
};

// this function should be able to return both the multiplied and the added version of the result
// the type of the function is strcut Box_that_has_two_numbers_inside, because it is returning a box that contains two numbers
struct Box_that_has_two_numbers_inside our_funtion(int a, int b) // our function = 8  ,  15
{

	struct Box_that_has_two_numbers_inside posilka; // opening a new box to put two numbers inside and returning to the main functiong

	posilka.number_one = a + b; // put the first number isnide the box
	posilka.number_two = a * b; // put the second number insdie the box

	return posilka; // return that box
}

int main()
{
	// make another box that has a type of struct Box_that_has_two_numbers_inside. It should hold the returned posilka(box that has been returned)
	struct Box_that_has_two_numbers_inside result = our_funtion(3, 5);

	printf("addition       value is: %d\n", result.number_one); // print the first number inside the returned posilka
	printf("multiplication value is: %d\n", result.number_two); // print the second number inside the returned posilka

	return 0;
}
