//เขียนโปรแกรมแสดงข้อความ IoT-SAU
//แสดงผลการคำนวณของ 2 ยกกำลัง 500
// " " Double quote , ' ' Single quote , # hash , / slash , \ backslash
// { } curly bracket , [ ] square bracket , ( ) round bracket , < > angle bracket
// : colon , ; semicolon , `  backtick , | pipe , & ampersand

#include <stdio.h> //หรือเขียนใน "stdio.h"
#include <math.h>

//การกำหนดค่าคงที่ คือ การสร้างตัวแทนเพื่อมาเก็บข้อมูลใดๆ โดยที่ไม่สามารถเปลี่ยนค่าข้อมูลนั้นได้
//และสามารถเอาตัวแทนที่สร้างไปใช้โปรแกรมได้
#define Showline printf("+++++++++++++++++++++++++++++++++++++\n");
#define SMLIE "^______^ 555"

int main(){
    Showline
    printf("IoT-SAU\n");
    Showline
    Showline
    printf("%lf\n", pow(2, 10));
    printf("%s\n", SMLIE);
    Showline

    return 0;
}