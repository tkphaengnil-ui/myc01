#include <stdio.h>
#define showline printf("---------------------\n");

int main() {
    int number, result;
    int i;

    showline
    printf("     Multiplication Table\n");
    showline
    printf("Enter number: ");
    scanf("%d", &number);
    showline

    for(i = 1 ; i <= 12; i = i + 1){ // ++i, i++, i+=1
        result = number * i;
        printf("%d x %d = %d\n", number, i, result);
    }
    showline
    
    return 0;
}