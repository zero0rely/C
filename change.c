#include <stdio.h>

int main()
{
    int price = 0;
    int amount = 0;

    printf("please type the price.");
    scanf("%d", &price);

    printf("please type the amount of money that you have given.");
    scanf("%d", &amount);

    int change = amount - price;

    printf("here are %d RMB.\n", change);

    return 0;
}