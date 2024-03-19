#include <stdio.h>
#define N 1000000

int main(void)
{   int a,i,sum=0,b[N],j;
    
    
    for(i=0;i<N;i++)
        b[i]=0;
    
    b[1]=1;
    b[0]=1;
    
    for(i=2;i<N;i++)
        if(b[i]==0)
            for(j=i+i;j<N;j+=i)
                b[j]=1;
    while(1)
    {
        sum=0;
        if (scanf("%d",&a) == EOF) {
            break;
        }
        
        for(i=0;i<=a;i++)
            if(b[i]==0)
                sum++;
        
        printf("%d\n",sum);
        
        
        
    }
    return 0;
    
    
}