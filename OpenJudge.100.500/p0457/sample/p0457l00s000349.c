#include<stdio.h>
int main(void)
{
    long int n,m,k,a[200001],b[200001],suma[200001] = {},sumb[200001] = {},sum = 0,i,j;
    scanf("%ld %ld %ld",&n,&m,&k);
    for(i = 0 ; i < n ; i++)
    {
        scanf("%ld",&a[i]);
        if(i == 0)
        {
            suma[i] == 0;
        }
        
            suma[i + 1] = suma[i] + a[i];
        
        
    }
    for(i = 0 ; i < m ; i++)
    {
        scanf("%ld",&b[i]);
        if(i == 0)
        {
            sumb[i] == 0;
        }
        
            sumb[i + 1] = sumb[i] + b[i];
        
        
    }
    
    int daihyou = m;
    for(i = 0 ; i <= n ; i++)
    {
        if(suma[i] > k)
        {
            break;
        }
        j = daihyou;
        while(j >= 0)
        {
            if(suma[i] + sumb[j] <= k)
            {
                if(sum < i + j)
                {
                    sum = i + j;
                }
                daihyou = j;
                
                break;
            }
            j--;
        }
    }
    printf("%ld\n",sum);
    return 0;
}