#include<stdio.h>
int main(void)
{
    int a,b,p=0,s=1;
    scanf("%d%d",&a,&b);
    p=a;
    while(p<b){
        p+=a-1;
        s++;
    }
    printf("%d\n",s);
    return 0;
}