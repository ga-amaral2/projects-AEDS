#include <stdio.h>
int main(){
int vetor[10],num,cont = 0;
    printf("Preencha o vetor\n");
        for(int i = 0;i<10;i++){
            scanf("%d",&vetor[i]);
    }
    printf("Digite um numero");
    scanf("%d",&num);
        for(int i = 0;i<10;i++){
            if(num == vetor[i]){
                cont++;
                printf("\nPosicao %d do arrey",i);
                printf("\nfoi digitado %d vezes",cont);
            }

        }
return 0;
}
