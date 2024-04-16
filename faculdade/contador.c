#include <stdio.h>
int main(){
int num,cont = 0,cont2 = 0;
scanf("%d",&num);
    while(num != -1){
        scanf("%d",&num);
        cont++;
        if(num == 5){
            cont2++;
        }
    }
    printf("%d",cont);
    printf("%d",cont2);

return 0;
}
