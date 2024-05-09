#include <stdio.h>

void dobra_primeiro(int vetor[],int a){
    vetor[0] = a;
    for(int i=0;i<9;i++){
            vetor[i+1]=vetor[i]*2;
            
            printf("N[%d] = %d\n",i,vetor[i]);
        }
        
    }
    
    
}
 
int main() {
 int v;
 int vetor[10];
 
 scanf("%d",&v);
 dobra_primeiro(vetor,v);
 
 
 
    return 0;
}