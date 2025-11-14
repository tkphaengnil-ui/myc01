#include <stdio.h>
#define SHOWLINE printf("----------------------------\n");
#define EMP_NUM 5

int main(){

    double emp_sales[EMP_NUM], sum = 0, averge_sales;
    
    SHOWLINE
    printf("       AVERAGE SALES\n");
    SHOWLINE
    for(int x = 0; x < EMP_NUM; x++){ // ++X, X++, X+=1, X=X+1
        printf("Employee no. %d/sale is: ", x+1);
        scanf("%lf", &emp_sales[x]);
        
    }
    SHOWLINE
     for(int x = 0; x < EMP_NUM; x++){
        sum = sum + emp_sales[x];
     }

    averge_sales = sum / EMP_NUM;
    printf("Average sales is: %.2lf\n", averge_sales);
    SHOWLINE

    return 0;
}