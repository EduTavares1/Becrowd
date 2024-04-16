#include <stdio.h>
#include <math.h>
 
int main() {
 float x1,y1,x2,y2,distancia,quax,quay;
 
 scanf("%f %f",&x1,&y1);
 scanf("%f %f",&x2,&y2);
 
 quax = pow(x2-x1,2);
 quay = pow(y2-y1,2);
 distancia = sqrt(quax + quay);
 
 printf("%.4f\n",distancia);
 
 
 
    return 0;
}