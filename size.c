#include<stdio.h>
int main()
{
    int IntType;
    char charType;
    float floatType;
    double doubleType;
    printf("Int type is: %zu bytes\n", sizeof(IntType));
    printf("char type is: %zu bytes\n", sizeof(charType));
    printf("float type is: %zu bytes\n", sizeof(floatType));
    printf("double type is: %zu bytes\n", sizeof(doubleType));
}