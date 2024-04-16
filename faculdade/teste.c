#include<stdio.h>
int main(){
    int num1,num2,result,soma,divisao,result2,result3,quad1,quad2,somaQ;
        printf("Digite o primeiro numero:\n");
            scanf("%d",&num1);
        printf("Digite o segundo numero:\n");
            scanf("%d",&num2);
                result = num1*num2;
                    result2 = num1+num2;
                        result3 = num1/num2;
        printf("O resultado da multiplciacão de %d por %d e: %d\n",num1,num2,result);

        printf("\nO resultado da soma de %d por %d e: %d\n", num1,num2,result2);

        printf("\nO resultado da divisao de %d por %d e: %d\n",num1,num2,result3);
                quad1 = num1*num1;
                    quad2 = num2*num2;
                        somaQ = quad1+quad2;
        printf("\nA soma do quadrado de %d pelo quadrado de %d e: %d\n",num1,num2,somaQ);
}
