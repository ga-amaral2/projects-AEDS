#include <stdio.h>
int main(){
int vetor[10],num,cont = 0;
    for(int i = 0;i<10;i++){
        scanf("%d",&vetor[i]);
    }
    prinft("\nDigite um numero para verificar sua ocorrencia");
    scanf("%d",&num);
    for(int i = 0;i<10;i++){
        if(vetor[i] == num){
            cont++;
            printf("\nPosição %d do arrey",i);
            printf("\nO numeoro se repetiu %d vezes",cont);
        }
    }
return 0;
}

