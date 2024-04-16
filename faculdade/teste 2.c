#include <stdio.h>
#include <math.h>
int main (){
int i, n;
scanf("%d", &n);
i = 0;
    for(i = 0;i <= n;i++){
        if(i%2 == 0) {
            printf("%d\t",i);
        }
    }

return 0;
}
