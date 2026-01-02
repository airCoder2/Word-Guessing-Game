#include <stdio.h>
// this might be for the next lecture inshaAllah
struct X_and_Y
{
    int x;
    int y;
};

struct X_and_Y some_function(int x, int y)
{

    struct X_and_Y result;

    result.x = x + 1;
    result.y = y + 1;

    return result;
}

int main()
{

    struct X_and_Y our_result = some_function(3, 5);
    printf("x: %d, y: %d", our_result.x, our_result.y);

    return 0;
}