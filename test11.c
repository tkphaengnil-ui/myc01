#include <stdio.h>
#define showline printf("---------------------\n");

int main() {
    int num1, num2, sum; //%d

    showline
    printf("    SUM NUMBER\n");
    showline
    do{
        printf("Enter number1: ");
        scanf("%d", &num1);
        printf("Enter number2: ");
        scanf("%d", &num2);
        sum = num1 + num2;
        printf("Sum of  %d and %d is: %d\n", num1, num2, sum);
        showline
    }while( sum <= 999);

    return 0;
}