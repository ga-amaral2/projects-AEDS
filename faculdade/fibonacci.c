#include <stdio.h>
int main(){
int qnt,num = 0, num2 = 1, soma;
    printf("Digite a quantidade de elementos da sequencia:\n");
    scanf("%d",&qnt);
    for(int i = 0; i<qnt-1;i++){
        soma = num + num2;
        num = num2;
        num2 = soma;
            printf("\t%d",soma);
    }

return 0;
}
