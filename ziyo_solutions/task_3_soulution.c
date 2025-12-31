#include <stdio.h>
int main(){

    int count = 0;
    char hidden = 'q';
    char finding =! hidden;



 printf("****    IN THIS GAME YOU SHOULD FIND HIDDEN LETTER    ****\n");

 
    while (1)
    {
        scanf(" %c", &finding);

        if (finding == hidden)
        {
            printf("You are right ");
            break;
        }
        else
        {
            printf("Incorrect try again - ");
            scanf(" %c", &finding);
        }
        
        
    }
           

        
    return 0;
}