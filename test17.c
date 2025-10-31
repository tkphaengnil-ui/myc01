// no parameter has return
#include <stdio.h>

double funcC();

int funcA(){
    printf("hi...\n");
    return 500; //literal data, raw data
}

int main() {
    double wow;
    printf("%d\n", funcA());
    wow = funcC();
    
    return 0;
}

double funcC(){
    printf("hey...\n");
    return 10 * 20.5; // expression
}