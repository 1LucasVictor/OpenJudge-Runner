#include<stdio.h>
int main()
{
    int n,i,p,a=100000;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            p=(a*5)/100;
            a=a+p;
            if(a%1000!=0){
                a=a-(a%1000)+1000;
            }

            }
            printf("%d\n",a);
    }