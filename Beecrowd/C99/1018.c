
#include <stdio.h>


int main(){

int n,i,c,cin,vi,de,ci,d,um;

c=cin=vi=de=ci=d=um=0;

scanf("%d",&n);

for(i=n;i>=100;i=i-100){
    c++;
}
for(i;i>=50;i=i-50){
    cin++;
}
for(i;i>=20;i=i-20){
    vi++;
}
for(i;i>=10;i=i-10){
    de++;
}
for(i;i>=5;i=i-5){
    ci++;
}
for(i;i>=2;i=i-2){
    d++;
}
for(i;i>=1;i=i-1){
    um++;
}

printf("%d\n",n);
printf("%d nota(s) de R$ 100,00\n",c);
printf("%d nota(s) de R$ 50,00\n",cin);
printf("%d nota(s) de R$ 20,00\n",vi);
printf("%d nota(s) de R$ 10,00\n",de);
printf("%d nota(s) de R$ 5,00\n",ci);
printf("%d nota(s) de R$ 2,00\n",d);
printf("%d nota(s) de R$ 1,00\n",um);

}