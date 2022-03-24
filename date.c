#include<stdio.h>
struct date {
    int d,m,y;
};
void main()
{
    struct date today,d1;
    
    today.d = 34;
    today.m = 3;
    today.y = 2022;

    printf("Enter your any date: ");
    scanf("%d %d %d", &d1.d, &d1.m, &d1.y);
    printf("Date: %d/%d/%d", d1.d, d1.m, d1.y);
};