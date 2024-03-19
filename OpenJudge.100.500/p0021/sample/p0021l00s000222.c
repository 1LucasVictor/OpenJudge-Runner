#include <stdio.h>

#define ll (long long)
#define REP(i,n) for(int i = 0;i<(int)n;i++)
#define FOR(i,a,b) for(int i = (a);i < (b);i++)
#define RFOR(i,a,b) for(int i = (a);i>(b);i--)

int main (void){
  
    int number;
    int l = 0;
    while(scanf("%d",&number),number)
    {
        int a[5010] = {0};
        int tempmax2[5010] = {0};
        int temp = 0;
        REP(i,number)
        scanf("%d",&a[i]);
        for(int j = 0; j<number;j++)
            for(int k = j;k<number;k++)
            {
                for(int l = k;l<number;l++)
                {
                    if(k == l)
                        tempmax2[k] = a[k];
                    else{
                        
                        tempmax2[k] += a[l];
                    }
                    if(temp <= tempmax2[k])
                        temp = tempmax2[k];
                }
            }
        printf("%d\n",temp);
    }
    return 0;
}