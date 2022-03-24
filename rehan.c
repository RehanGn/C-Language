/*#include<stdio.h>
int main()
{
    int a, b, sum ;
    printf("Enter the two no: ");
    scanf("%d %d", &a, &b );
    sum = a + b;
    printf("%d + %d = %d", &a, &b, &sum);
    return 0;

}*/
#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}
