#include <stdio.h>
#define showline printf("----------------------------------------\n");
int main() {
    int number;

    showline
    printf("   Even % Odd Number\n");
    showline
    while(1){
        printf("Enter number : ");
        scanf("%d", &number);
        if(number <= 0){
            showline
            break;
        }
        if(number % 2 == 0){
            printf("Number is even number\n");
        } else {
            printf("Number is odd number\n");
        }
        showline

    }

    return 0;
}