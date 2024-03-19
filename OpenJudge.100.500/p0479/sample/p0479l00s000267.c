#include<stdio.h>
#include<string.h>

int main ()
{
   
    int a,b,i,s=0;
    scanf("%d",&a);
    int x[a];
    for(i=0;i<a;i++)
    {
        x[i]=0;
    }
    for(i=0;i<(a-1);i++)
    {
        scanf("%d",&b);
        x[b]++;
    }
    for(i=1;i<a;i++)
    {
        printf("%d\n",x[i]);
    }
    printf("%d\n",0);
    
    return 0;
}
