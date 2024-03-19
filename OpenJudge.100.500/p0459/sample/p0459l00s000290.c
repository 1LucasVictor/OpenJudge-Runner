#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int max(int a,int b){return a>b?a:b;}
int min(int a,int b){return a<b?a:b;} 
int main(void)
{
    int x, y,f=0;
    scanf("%d %d",&x,&y);
    for(int i=0;i<=x;i++)
    {
        if(y==2*(x-i)+4*i)
        {
            printf("Yes");
            f=1;
            break;
        }
    }
    if(f==0)
    printf("No");
}