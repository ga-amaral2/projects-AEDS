#include <stdio.h>
int main(){
int num[10],maior;
    for(int i = 0;i<10;i++){
        scanf("%d",&num[i]);
    }
    maior = num[0];
    for(int i = 1;i<10;i++){
        if(num[i] > maior){
            maior = num[i];
        }
    }
    printf("\nMaior e: %d",maior);
return 0;
}
