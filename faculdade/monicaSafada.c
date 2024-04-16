/*#include <stdio.h>
int main(){
int m,a,b,c,velho;
    scanf("%d",&m);
    scanf("%d",&a);
    scanf("%d",&b);
        if(m>=40 && m<=110 && a>=1 && a<m && b>=1 && b<m && a!=b){
            c = m -(a+b);
        }
        if(c>a&&c>b){
            velho = c;
        }else if(a>c&&a>b){
            velho = a;
        }else if(b>c&&b>a){
            velho = b;
        }
        printf("\n%d",velho);
return 0;
}*/
#include <stdio.h>

int main(){
int M, a, b,c;
    scanf("%d%d%d", &M, &a, &b);
    c = M - a - b;
int Velho = a;
    if (b > Velho){
        Velho = b;
    }
    if (c > Velho){
        Velho = c;
    }
    printf("%d\n",Velho);

    return 0;
}
