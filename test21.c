#include <stdio.h>
#define SHOWLINE printf("==============================\n");
#define STU_NUM 5
#define SUB_NUM 3

int main(){

    int stu_score[STU_NUM][SUB_NUM];
    char sub_name[3][10] = {"MATH", "SCIENCE", "ENGLISH"};

    printf("==========SCORE TABLE=========\n");
    for(int x = 0; x < STU_NUM; x++) {
        printf("Student No.%d:\n", x + 1);
        for(int y = 0; y < SUB_NUM; y++){
            printf("  %-10s : ", sub_name[y]);
            scanf("%d", &stu_score[x][y]);
        }
        printf("\n");

    }
    printf("==========AVERAE SCORE SUBJECT=========\n");
    for(int y = 0 ;y < SUB_NUM; y++){
        int sum = 0;
        for(int x = 0; x < STU_NUM; x++){
            sum = sum + stu_score[x][y];
        }
        double average = sum / STU_NUM;
        printf("%-10s : %lf\n", sub_name[y], average);
    }
    SHOWLINE

    return 0;
}