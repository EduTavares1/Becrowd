#include <stdio.h>


int main(){

int cod,cod2,quan,quan2;
float v1,v2,total;

scanf("%d %d %f",&cod,&quan,&v1);
scanf("%d %d %f",&cod2,&quan2,&v2);

v1 = v1 * quan;
v2 = v2 * quan2;
total = v1 + v2;

printf("VALOR A PAGAR: R$ %f\n",total);


}