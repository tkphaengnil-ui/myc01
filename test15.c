// no parameter no return
#include <stdio.h>

void funcB();
void funcC();

void funcA(){
    printf("hey...\n");
    funcC();
}

int main(){
    funcA();
    funcA();
    funcB();

    return 0;
}

void funcB(){ printf("hi...\n"); }

void funcC(){ printf("hello...\n"); }