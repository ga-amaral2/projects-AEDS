#include <stdio.h>
int main(){

int vetor[10], maior = vetor[0];
    for(int i=0;i<10;i++){
        scanf("%d",&vetor[i]);
    }
    for(int i = 1;i<10;i++){
        if(vetor[i]>maior){
            maior = vetor[i];
        }
    }
    printf("\n%d maior",maior);


return 0;
}
