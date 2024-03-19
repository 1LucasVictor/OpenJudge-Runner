#include<stdio.h>
int main ()
{
    int i,a,b,s=0;
    scanf("%d %d", &a, &b);
    for(i=1;a>0;i++){
        a=a-b;
    }
    i--;
    printf("%d\n",i);
}
