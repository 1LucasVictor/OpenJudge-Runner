#include <stdio.h>

int main (void){
  
    int number;
    int l = 0;
    int i,j,k;
    while(scanf("%d",&number),number)
    {
        int a[5010] = {0};
        int tempmax2[5010] = {0};
        int temp = 0;
        for(i = 0; i<number;i++)
        scanf("%d",&a[i]);
        for( j = 0; j<number;j++)
            for( k = j;k<number;k++)
            {
                for( l = k;l<number;l++)
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