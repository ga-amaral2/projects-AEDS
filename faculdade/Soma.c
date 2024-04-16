/*#include <stdio.h>
int main(){

int n,somaCima;
float S,somaBaixo;
    scanf("%d",&n);
int vetor[n],divisor[n];
    vetor[0]=1;
    divisor[0]=1;
    for(int i=1;i<n;i++){
        vetor[i]= vetor[i-1]+2;
    }
    for(int i=1;i<n;i++){
        divisor[i]=divisor[i-1]+1;
    }
somaCima+=vetor[n];
somaBaixo+=divisor[n];
S=somaCima/somaBaixo;
    printf("\n%f",S);
return 0;
}*/

/*#include <stdio.h>
int main(){
int n,cima=1,baixo=1;
float S,somaC=0,somaB=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      cima = 2*i;
      somaC +=cima;
    }
    for(int i=0;i<n;i++){
        baixo += 1;
        somaB +=baixo;
    }
S = somaC/somaB;
    printf("\n%f",S);
return 0;
}*/

/*#include <stdio.h>

int main() {
    int n;
    float S = 0;
   // printf("Digite o número de termos da série: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        S += (2 * i - 1) / (float)i;
    }
    printf("\n%.2f\n", S);

    return 0;
}*/

#include <stdio.h>

int main() {
int n,int denominador = 1;
float S = 0;
   // printf("Digite o número de termos da série: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        S += (2 * i + 1) / (float)denominador;
        denominador++;
    }

    printf("\nO valor da soma é: %.2f\n", S);

    return 0;
}
