#include <stdio.h>
int main(){
int num,cont=0,cont2=0;
    do{
        scanf("%d",&num);
        cont++;
        if(num==5){
            cont2++;
        }
    }while(num!=-1);
    cont = cont-1;
    printf("%d\t%d",cont,cont2);

return 0;
}
