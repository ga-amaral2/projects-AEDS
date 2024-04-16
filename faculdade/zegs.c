#include <stdio.h>
int main(){
    char resultado_jogos[6];
    int vitorias = 0;
    int grupo;

    for (int i = 0; i < 6; i++) {
        scanf(" %c", &resultado_jogos[i]);
        if (resultado_jogos[i] == 'V')
            vitorias++;
        if(resultado_jogos[i]!='V'||resultado_jogos[i]!='P'){
            grupo = 0;
        }
    }


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
}

