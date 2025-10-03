//preprocess directive
#include <stdio.h>
#include <math.h>
#define ShowSenPa printf("----------------------------\n");
#define Smile "^_^"

//global declalaration
int number =555;
void showHi();

void showHey(){
    printf("Hey\n");
}

int main(){ //user-defined function
    ShowSenPa
    printf("Welcome to SAU\n%s\n", Smile);
   /* 
    ShowSenPa
    showHey();
    showHi();
    ShowSenPa
    */
    return 0;
}

void showHi(){
    printf("Hi\n");
}
