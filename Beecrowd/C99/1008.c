#include <stdio.h>
 
int main() {
int NUMBER;
float horas,SALARY;
scanf("%d",&NUMBER);
scanf("%f",&SALARY);
scanf("%f",&horas);
SALARY = horas * SALARY;
printf("NUMBER = %d\n",NUMBER);
printf("SALARY = U$ %.2f\n", SALARY);
 
    return 0;
}