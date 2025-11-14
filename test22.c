#include <stdio.h>

int main(){

    int dataA;
    int *p_dataA = &dataA;

    dataA = 10;

    // แสดง address number ของ dataA
    printf("Address of dataA is : %p\n", &dataA);
    printf("Address of dataA is : %d\n", &dataA);
    printf("%p\n", p_dataA);
    printf("%d\n", p_dataA);

    // แสดงค่าที่อยู่ในช่อง dataA
    printf("Value dataA %d\n", dataA);
    printf("Value dataA %d\n", *p_dataA);
    
    printf("Address of P_dataA is : %d\n", &p_dataA);
    *p_dataA = 999;
    printf("Value dataA %d\n", dataA);
    printf("Value dataA %d\n", *p_dataA);
    
    return 0;   
}