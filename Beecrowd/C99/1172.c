#include <stdio.h>
#define max 10
 
 void Levetor(int vetor[]){
     for(int i=0;i<max;i++){
         scanf("%d",&vetor[i]);
     }
 }
 
 void substitui_1(int vetor[]){
      for(int i=0;i<max;i++){
          if(vetor[i]<=0)
          vetor[i] = 1;
           printf("x[%d] = %d\n",i,vetor[i]);
      }
     
 }


int main() {
 int vetor[max];
 
 Levetor(vetor);
 substitui_1(vetor);
   
 
    return 0;
}