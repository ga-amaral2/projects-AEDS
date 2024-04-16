
/*#include <stdio.h>
int main(){
int num,num2,maior=0,menor=0,primo=0;
    scanf("%d",&num);
    scanf("%d",&num2);
        if(num>num2){
            num =maior;
            num2=menor;
        }else if(num2>num){
            num2=maior;
            num=menor;
        }
        for(int i=menor;i<maior;i++){
            for(int j=menor;j<maior;i++){
                if(j%i==0){
                    printf("\t%d\t",j);

                }
            }
        }

return 0;
}*/
#include <stdio.h>

int main() {
    int num1, num2;
    int primo = 0;

   // printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
  //  printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    if (num1 >= num2) {
      //  printf("O primeiro número deve ser menor que o segundo.\n");
        return 1;
    }
  //  printf("Números primos entre %d e %d:\n", num1, num2);
    for (int num = num1; num <= num2; num++) {
        int is_prime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (num > 1 && is_prime) {
            printf("%d\n", num);
            primo = 1;
        }
    }

    return 0;
}

