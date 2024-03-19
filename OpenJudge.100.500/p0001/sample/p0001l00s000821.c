#include<stdio.h>
int main(void)
{
    int a,b,c;
    int i;
    i=0;
    while(scanf("%d %d",&a,&b)!=EOF){
    c=a+b;
    for(;;)
    {
        i++;
        if(c<10) break;
        c=c/10;

    }
    printf("%d\n",i);
    i=0;
    }
    return 0;

}