//รับค่าชื่อ-สกุล อายุ เงินเดือน แล้วแสดงผลออกมา

#include <stdio.h>
#define showline printf("--------------------------------------------------\n");
int main() {
    char fullname[50]; //%s ,%[^\n]
    int age;           //%d
    float salary;      //%f

    printf("  Profile Information  \n");
    showline
    printf("Enter your full name: ");
    scanf("%[^\n]", &fullname); // ^ เรียกว่า calet
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your salary: ");
    scanf("%f", &salary);
    showline
    printf("Hello %s\n", fullname);
    printf("You are %d years old.\n", age);
    printf("Your salary is %.2f baht.\n", salary);
    showline

    return 0;
}