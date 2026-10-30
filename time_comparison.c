#include <stdio.h>

int main()
{
    int hour1, minute1;
    int hour2, minute2;

    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);

    printf("%d %d", ((hour1 * 60 + minute1) - (hour2 * 60 + minute2)) / 60, ((hour1 * 60 + minute1) - (hour2 * 60 + minute2)) % 60);

    return 0;

    // 自己写的代码!!
}