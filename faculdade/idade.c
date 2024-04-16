/*idade da monica
    A + B + C = M
*/
#include <stdio.h>
int main(){
int M, a, b, c;
    puts("A idade da Monica tem que ser maior que 40 e menor que 111\n");
    puts("Os filhos nao podem ter a mesma idade\n");
    printf("Digite a idade da Monica:\n");
     scanf("%d", &M);
    printf("Digite a idade de um dos filhos:\n");
     scanf("%d", &a);
    printf("Digite a idade de outro filho:\n");
      scanf("%d", &b);
    if(M >= 40 && M <=110 && a>=1 && a<M && b>=1 && b<M && a!=b){
        c = M - (a+b);
    if(a>c || b>c){
        printf("\nA idade do outro filho e %d",c);
    }else{
        printf("\nA idade do filho mais velho e %d", c);
    }
    }else{
    printf("\nNao e valido!");
    }


return 0;
}
/*
TESTE DE MESA

52   52 - (14+18)
14   52 - 32
18   ///20///

70   70 - (20+26)
20   70 - 46
26   ///24///

*/
