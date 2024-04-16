#include <stdio.h>
#include <ctype.h> // Para usar a fun��o toupper()

int main() {
    char resultado_jogos[6];
    int vitorias = 0;

    // Entrada dos resultados dos jogos
    for (int i = 0; i < 6; i++) {
        char input;
        do {
            scanf(" %c", &input);
            input = toupper(input); // Converte para mai�sculo
            if (input != 'V' && input != 'P') {
                printf("Entrada inv�lida. Por favor, insira 'V' para vit�ria ou 'P' para derrota.\n");
            }
        } while (input != 'V' && input != 'P');

        resultado_jogos[i] = input; // Salva o resultado v�lido
        if (input == 'V')
            vitorias++;
    }

    // Determina o grupo do participante
    int grupo;
    if (vitorias >= 5)
        grupo = 1;
    else if (vitorias >= 3)
        grupo = 2;
    else if (vitorias >= 1)
        grupo = 3;
    else
        grupo = -1;

    // Sa�da
    printf("%d\n", grupo);

    return 0;
}
