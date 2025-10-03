//โปรแกรมแสดงชื่อ Sombat และคะแนน 99 ทางหน้าจอ
#include <stdio.h>
int main(){
    
    char Fullname[10] = "Sombat";
    int score;
    score = 99;

    //ใน "" ของ printf() เขียนอย่างไงแสดงอย่างนั้น ยกเว้น % Format Spec.,\ escape sequence
    printf("Name is : Fullname\n");
    printf("Name is : %s\n", Fullname);
    printf("Score is : %d\n", score);

    return 0;
}