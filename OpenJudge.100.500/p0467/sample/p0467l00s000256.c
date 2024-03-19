#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,k;
    scanf("%d %d %d %d",&a,&b,&c,&k);
    if(a+b+c>k){
        printf("%d\n",(a+b)-c);

    }
    if(a+b+c==k){
        printf("%d\n",a-c);
    }

    return 0;
}
