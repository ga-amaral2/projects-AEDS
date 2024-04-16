/*#include <stdio.h>
int main(){
int num,primo = 1;
    scanf("%d",&num);
    while(num>0){

        for(int i = 2;i<num;i++){
            if((num % i) == 0){
                primo = 0;
            }
        }
        if(num == 1){
            primo = 0;
        }
        if(primo == 1){
            printf("Primo\n");
        }else{
            printf("Nao primo\n");
        }
    scanf("%d",&num);
    }

return 0;
}*/
/*#include <stdio.h>
#include <stdbool.h>
int main(){
int num;
    do{
        scanf("%d",&num);

    bool primo = true;
    for(int i = 2;i<num;i++){
        if((num % i) == 0){
            primo = false;
        }
    }
    if(primo == true ){
        printf("Primo\n");
    }else{
        printf("Nao primo\n");
    }
    scanf("%d",&num);

    }while(num>0);
return 0;
}
*/
#include <stdio.h>


int ehPrimo(int num) {
    if (num <= 1) {
        return 0; //
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;

   // printf("Digite os números (digite um número negativo para parar):\n");

    do {
        scanf("%d", &num);
        if (num >= 0) {
            if (ehPrimo(num)) {
                printf("Primo\n");
            } else {
                printf("Nao primo\n");
            }
        }
    } while (num >= 0);

    return 0;
}
