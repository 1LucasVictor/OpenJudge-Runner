#include <stdio.h>
int main(int argc, char const * argv[])
{
    int a, b;
    scanf("%d %d", &a,&b);
    int soma = (a)+(b);
    int dif = (a)-(b);
    int prod = (a)*(b);
    if(soma>dif && soma>prod){
        printf("%d\n",+soma);
    }else{
        if(dif>soma && dif>prod){
            printf("%d\n",+dif);
        }else{
            if(prod>soma && prod>dif){
               printf("%d\n",+prod); 
            }
        }
    }
}