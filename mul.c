#include<stdio.h>
int main()
{
    double x, y, product;
    printf("Enter the two no: ");
    scanf("%lf %lf", &x, &y);
    product = x * y;
    printf("Product = %.2lf", product);
}