

#include<stdio.h>
 
int main(void)
{
    char x[1001];
    int sum[10000];
    int number;
    int i, j;
    int last = 0;
     
    for(i = 0; last != 1; i++)
    {
        scanf("%s", x);
        for(j = 0; x[j] != '\0'; j++)
        {
            if(j == 0)
            {
                sum[i] = (int)(x[j] - '0');
            }
            else
            {
                sum[i] += (int)(x[j] - '0');
            }
 
        }
        if(x[0] == '0' && x[1] == '\0')
        {
            last = 1;
            number = i;
        }
    }
     
    for(i = 0; i < number; i++)
    {
        printf("%d\n", sum[i]);
    }
    return 0;
}
   
 



 