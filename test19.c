// หาผลรวมและค่าเฉลี่ยขอเลข 3 จำนวนที่รับทางแป้นพิมพ์ แล้วแสดงผลออกมา
// input, process (คำนวณ/ผิสูจน์ตรวจสอบ/ทำซ้ำ), output , save
// feture การทำงานมีอะไรแล้ว เพื่อมาสรุปสร้างเป็น ฟังก์ชัน

// feture -> รับค่าเลข 3 จำนวน -> คำนวณผลรวม -> คำนวณค่าเฉลี่ย -> แสดงผลรวม -> แสดงค่าเฉลี่ย
// function -> inputNumber, calSum, calAverage, showSumandAverage

#include <stdio.h>

int calSum(int num1, int num2, int num3){
    return num1 + num2 + num3;

}

double calAverage(int num1, int num2, int num3){
    return (num1 + num2 + num3) / 3.0;
}

void showSumandAverage(int sum, double average){
    printf("Sum: %d\n", sum);
    printf("Average: %.2lf\n", average);
}

void intputNumber(){
    int num1, num2, num3;
    int sum;
    double average;
    printf("Enter numbers 1: "); scanf("%d", &num1);
    printf("Enter numbers 2: "); scanf("%d", &num2);
    printf("Enter numbers 3: "); scanf("%d", &num3);
    sum = calSum(num1, num2, num3);
    average = calAverage(num1, num2, num3);
    showSumandAverage(sum, average);
}

int main(){
    intputNumber();
    return 0;  
}