/*#include <stdio.h>
int main(){
int num,cont=0;
    scanf("%d",&num);
    for(int i = num;i>=1;i--){
        if(num%i==0){
            cont++;
        }
    }
    printf("\n%d",cont);
}*/
#include <stdio.h>

int main() {
    int N,contador = 1,fator = 2;
    scanf("%d", &N);
    while (N > 1) {
        int expoente = 0;
        while (N % fator == 0) {
            expoente++;
            N = N / fator;
        }
        if (expoente > 0) {
            contador = contador * (expoente + 1);
        }
        fator++;
    }
    printf("%d\n", contador);

    return 0;
}
