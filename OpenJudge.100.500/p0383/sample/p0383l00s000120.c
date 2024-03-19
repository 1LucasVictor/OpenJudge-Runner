#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    int m;
    int l;

    int i;
    int j;
    int k;
    int num;
    int sum;
    
    int a[100][100];
    int b[100][100];
    
    for(i = 0; i < 100; i++)
    {
        for(j = 0; j < 100; j++)
        {
            a[i][j] = 0;
            b[i][j] = 0;
        }
    }
    
    scanf("%d %d %d", &n, &m, &l);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &num);
            a[i][j] = num;
            //printf("%d\n", a[i][j]);
        }
    }
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < l; j++)
        {
            scanf("%d", &num);
            b[i][j] = num;
        }
    }
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < l; j++)
        {
            for(k = 0; k < n; k++)
            {
                sum += (int)(a[i][k]) * (int)(b[k][j]);
            }
            if(j > 0)
            {
                printf(" ");
            }
            printf("%d", sum);
            sum = 0;
        }
        printf("\n");
        //sum = 0;
    }
    
    return 0;
}