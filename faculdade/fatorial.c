#include <stdio.h>
int main(){
int num,newNum=1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
       newNum *= i;
    }
    printf("\n%d",newNum);

return 0;
}
