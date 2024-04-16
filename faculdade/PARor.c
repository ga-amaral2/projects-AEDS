#include <stdio.h>
#include <math.h>
int main (){
    int num;
    scanf("%d", &num);
    if(num%2 == 1){
        printf("%d impar");
    }else
        if(num%2 == 0){
            printf("%d par");
        }
}
