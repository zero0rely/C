#include <stdio.h>

int main()
{
    int price = 0;

    printf("please type the price.");
    scanf("%d", &price);

    int change = 100 - price;

    printf("here are %d RMB.\n", change);

    return 0;
}