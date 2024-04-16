#include <stdio.h>
int main(){
int vetor[10],total;
float media;
    for(int i = 0;i<10;i++){
        scanf("%d",&vetor[i]);
    }
    for(int i = 0;i<10;i++){
        total += vetor[i];
    }
    printf("\nTotal e igual a: %d",total);
    media = total/10;
    printf("\nA media e de: %1.f",media);
return 0;
}

