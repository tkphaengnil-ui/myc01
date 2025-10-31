// have parameter no return
#include <stdio.h>

void funcB( char* name , int age);

void funcA( int a, int b){
    funcB("frank", 20);
    printf("%d\n", a + b);
    funcB("frank", 35);
}

int main() {
    funcA(10, 20);
    return 0;
}

void funcB( char* name , int age){
    printf("hello %s\n", name);
    printf("Your age is %d\n", age);
}