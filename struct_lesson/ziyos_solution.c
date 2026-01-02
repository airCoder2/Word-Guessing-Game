#include <stdio.h>
#include <string.h>

#define ONE_KG_PRICE 5
#define THREE_KG_PRICE 15

struct Market
{
    char market_name[32];
    int one_kg;
    int three_kg;
    int total_cost;
};

int main()
{
    int markets_total_cost = 0;
    int number_of_markets;

    printf("Enter the number of markets :");
    scanf("%d", &number_of_markets);

    struct Market markets[number_of_markets];

    for (int i = 0; i < number_of_markets; i++)
    {
        printf("You are ordering ice to market number %d \n", i + 1);

        printf("Enter your fst market name : ");
        scanf("%s", markets[i].market_name);

        // user entered number of 1kg
        printf("Enter how many 1 kg bags of ice do you want to order : ");
        scanf("%d", &markets[i].one_kg);

        // user entered number of 3kg
        printf("Enter how many 3 kg bags of ice do you want to order : ");
        scanf("%d", &markets[i].three_kg);

        // 5 + 10 + 20 + 25 + 30
        markets[i].total_cost = (ONE_KG_PRICE * markets[i].one_kg) + (THREE_KG_PRICE * markets[i].three_kg);

        markets_total_cost = markets_total_cost + markets[i].total_cost;

        printf("\n\n\n");
    }

    for (int i = 0; i < number_of_markets; i++)
    {
        printf("Your first market name is : %s\n", markets[i].market_name);
        printf("You have order 1kg: %d, 3kg: %d\n", markets[i].one_kg, markets[i].three_kg);
        
    }
    printf("YOUR TOTAL ORDER COST IS %d :", markets_total_cost);

    return 0;
}
