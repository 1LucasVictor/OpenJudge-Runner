#include<stdio.h>
int main()
{
    int a,b,c,e,f,g;
    scanf("%d %d",&a,&b);
    e=a+b;
    f=a-b;
    g=a*b;
    if(a==0 && b==0){
    printf("0\n");
    }
    else if(e>f && e>g){
    printf("%d\n",e);
    }
    else if(f>e && f>g){
    printf("%d\n",f);
    }
    else
    printf("%d\n",g);

    return 0;
}