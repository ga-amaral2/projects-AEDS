

/*#include <stdio.h>
int main(){
    char resultado_jogos[6];
    int vitorias = 0;

    for (int i = 0; i < 6; i++) {
        scanf(" %c", &resultado_jogos[i]);
        if (resultado_jogos[i] == 'V')
            vitorias++;
    }

    int grupo;
    if (vitorias >= 5)
        grupo = 1;
    else if (vitorias >= 3)
        grupo = 2;
    else if (vitorias >= 1)
        grupo = 3;
    else
        grupo = -1;


    printf("%d\n", grupo);

    return 0;
}*/
#include <stdio.h>

int main() {
    char resultado;
    int cont = 0;

    //printf("Digite o resultado do seu jogo:\n");

    for (int i = 0; i < 6; i++) {
        scanf(" %c", &resultado);

        if (resultado == 'v') {
            cont++;
        }
    }


    if (cont >= 5) {
        printf("Grupo 1\n");
    } else if (cont >= 3) {
        printf("Grupo 2\n");
    } else if (cont >= 1) {
        printf("Grupo 3\n");
    } else {
        printf("-1\n");
    }

    return 0;
}
