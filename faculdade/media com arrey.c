
#include <stdio.h>
int main(){
float nota[4],soma;

    for(int i = 0;i<4;i++){
        scanf("%f",&nota[i]);
    }
     soma = nota[0];
     for(int i = 1;i<4;i++){
        soma = (soma + nota[i]);
     }
     soma = soma / 4;
    printf("\n Media e:%f",soma);

return 0;
}
