/*numeros de 1 a 1024*/
#include <stdio.h>
int main(){
int cont = 0;
    for(int i = 1;i<=1024;i=i*2){
        printf("\t%d",i);
        cont++;
    }
    cont = cont - 1;
    printf("\n%d",cont);

return 0;
}

/* i = 1 / 2 / 4 / 8 / 16 / 32 / 64 / 128 / 256 / 512 / 1024
cont = 0 / 1 / 2 / 3 / 4 / 5 / 6 / 7 / 8 / 9 / 10 / 11 */
