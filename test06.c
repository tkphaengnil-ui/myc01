// Global-local variable
#include <stdio.h> // หรือ "stdio.h"

int dataA = 100; // global variable ใช้ที่ไหนก็ได้

void showData()
{
    int dataB = 555; // local variable ใช้ได้เฉพาะใน code block นั้นๆ เท่านั้น
    printf("dataA=%d\n", dataA);
    printf("dataB=%d\n", dataB);
    // printf("dataC=%d\n",dataC); error
}
int main()
{
    int dataC = 999;        // local variable ใช้ได้เฉพาะใน code block นั้นๆ เท่านั้น
    const int dataD = 1010; // constant variable
    //  dataD = 2020; error

    dataC = 888;

    printf("dataA=%d\n", dataA);
    dataC = 777;
    printf("dataC=%d\n", dataC);
    // printf("dataB=%d\n",dataB); error

    return 0;
}