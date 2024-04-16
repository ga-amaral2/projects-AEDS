#include <stdio.h>

int inverter_digitos(int numero) {
    int numero_invertido = 0;
    while (numero != 0) {
        numero_invertido = numero_invertido * 10 + numero % 10;
        numero /= 10;
    }

    return numero_invertido;
}

int main() {
    int numero;

        //printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
       // printf("Por favor, digite um número inteiro positivo.\n");
        return 1;
    }

    int numero_invertido = inverter_digitos(numero);

    printf("%d\n", numero_invertido);

    return 0;
}
