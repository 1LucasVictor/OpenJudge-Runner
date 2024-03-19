#include<stdio.h>
int main(void)
{
    int a,b,p=0,s=1;
    scanf("%d%d",&a,&b);
    while(a<b){
        a+=a;
        a--;
        s++;
    }
    printf("%d\n",s);
    return 0;
}