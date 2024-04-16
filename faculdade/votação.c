#include <stdio.h>
int main(){
int cand1=0,cand2=0,cand3=0,cand4=0,nulo=0,branco=0,voto;
float porcentagem,cont=0;
    do{
        scanf("%d",&voto);
        cont++;
            if(voto==1){
                cand1++;
            }else if(voto==2){
                cand2++;
            }else if(voto==3){
                cand3++;
            }else if(voto==4){
                cand4++;
            }else if(voto==5){
                nulo++;
            }else if(voto==6){
                branco++;
            }
        }while(voto>0&&voto<=6);
        cont = cont-1;
        porcentagem = branco/cont*100;
    printf("%d\t%d\t%d\t%d\t",cand1,cand2,cand3,cand4);
    printf("\n%d",nulo);
    printf("\n%.2f",porcentagem);

return 0;
}
