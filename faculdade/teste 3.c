#include <stdio.h>
int main (){
int a, b, c, i, n;
printf("Digite um numero:\n");
scanf("%d", &n);
a = 0;
b = 1;
printf("%d %d", a, b);
for (i = 1; i < n; i++){
    c = a + b;
    a = b;
    b = c;
    printf("%d\t",c);
}
return 0;
}
