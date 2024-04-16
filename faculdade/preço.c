#include <stdio.h>
int main(){
int codigo[10];
float preco[10],novopreco[10];
    for(int i = 0;i<10;i++){
        printf("Digite o codigo\n");
        scanf("%d",&codigo[10]);
        printf("Digite o preco\n");
        scanf("%f",&preco[10]);
    }
    for(int i = 0;i<10;i++){
        if((codigo[i]%2 == 0) && (preco[i]>1000)){
            novopreco[i] = preco[i]*1.2;
        }
        else if((codigo[i]%2 == 0)){
            novopreco[i] = preco[i]*1.15;
        }
        else if((preco[i]>1000)){
            novopreco[i] = preco[i]*1.1;
        }
        else{
            novopreco[i] = preco[i];
        }
    }
    for(int i = 0;i<10;i++){
        printf("%d\t%1.f\t%1.f",codigo[i],preco[i],novopreco[i]);
    }
return 0;
}
