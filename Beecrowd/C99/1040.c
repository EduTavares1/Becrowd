#include <stdio.h>
 
int main() {
 
    float n1,n2,n3,n4,media=0,nota_exame,media_final=0;
    
    
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    
    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    
    printf("Media: %.1f\n",media);
    
    if(media>=7){
        printf("Aluno aprovado.\n");
    }
    else if(media<5){
        printf("Aluno reprovado.\n");
    }
    else if(media>=5.0||media<=6.9){
        printf("Aluno em exame.\n");
        scanf("%f",&nota_exame);
        printf("Nota do exame: %.1f\n",nota_exame);
        media_final= (media+nota_exame)/2;
        if(media_final>=5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",media_final);
                }
        else if(media_final<5){
        printf("Aluno reprovado.\n");
         printf("Media final: %.1f\n",media_final);}
    }
    
    
    
  
    
 
    return 0;
}