#include<stdio.h>

int main(){
    int a,b,div,res;

    scanf("%d %d",&a,&b);

    div = b % a;

    if(div == 0)
    res = a + b;
    else
    {
        res= b - a;
    }
    printf("%d",res);
    return 0;
}