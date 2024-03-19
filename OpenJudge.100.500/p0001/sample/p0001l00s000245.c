#include<stdio.h>
int main(void)
{
    int a,b,c=1,d=0;
    while(scanf("%d %d",&a,&b)!=EOF){
    while(1){
        c=10*c;
        d++;
        if((a+b)/c==0)break;

        }
        printf("%d\n",d);
    }

    return 0;
}