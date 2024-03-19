#include<stdio.h>

int main (void)
{
        int a, b, k, m[10], i, d;

        scanf("%d%d%d",&a,&b,&k);
        d=0;
        for(i=1;i<a;i++){
                if((a%i==0)&&(b%i==0)){ m[d]=i;
                                        d=d+1;
                                      } 
        }
        printf("%d\n",m[k-1]);
        return 0;
}
