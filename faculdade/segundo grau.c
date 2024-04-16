#include <stdio.h>
#include <math.h>
float a, b, c;
float delta, x1, x2;
int main () {
    printf("Digite o primeiro numero:\n");
    scanf("%f", &a);
    printf("Digite o segundo numero:\n");
    scanf("%f", &b);
    printf("Digite o terceiro numero:\n");
    scanf("%f", &c);
    delta = pow(b,2) - 4 * a * c;
    if(delta >= 0){
        x1 = (- b + sqrt(delta)) / (2*a);
        x2 = (- b - sqrt(delta)) / (2*a);
        printf("As raizes sao: %.1f e %.1f", x1, x2);
    } else
        if(delta = 0){
            printf("Nao possui raizes reais");
        }
        return 0;
}
