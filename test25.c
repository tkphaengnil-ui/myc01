#include <stdio.h>

// สร้าง structure
struct Sau{
    char name[20];
    int id;
    int age;
    float score;
};

int main(){
    struct Sau dataA;
    int dataB[5];

    //กรณีที่สร้างและมีการกำหนด initial value
    int DataC[3] = {10, 20, 30};
    struct Sau DataD = {"Frank", 1, 20 , 99.99};

    printf("%d\n", DataC[2]); // => 30
    printf("%.2f\n", DataD.score); // => 99.99
    DataD.id = 6719410019;

    return 0;
}