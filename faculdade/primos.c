#include <stdio.h>
int main(){
int num,primo = 0;
    scanf("%d",&num);
    for(int i = 2;i<num;i++){
        if(num%i == 0){
            primo = 1;
        }
    }
    if(primo == 0){
        printf("Primo");
    }else{
    printf("Não Primo");
    }

return 0;
}
