#include <stdio.h>

//2. สร้าง structure
typedef struct{
    char name[20];
    int id;
    int age;
    float score;
} Sau; // ชื่อ Structure แบบที่เรียกว่า Alias Name

int main(){
    Sau dataA;
    Sau DataD = {"Frank", 1, 20 , 99.99};

    printf("%.2f\n", DataD.score); // => 99.99
    DataD.id = 6719410019;

    return 0;
}