#include <stdio.h>


int main(){
char nome [70];  
double salary,com,total;

salary = com = total = 0;

scanf("%s",nome);
scanf("%lf",&salary);
scanf("%lf",&com);

total = salary + (com * 0.15);

printf("TOTAL = R$ %.2f\n",total);

return 0;

}