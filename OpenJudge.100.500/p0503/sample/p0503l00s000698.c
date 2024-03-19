#include<stdio.h>

int main(void)
{
    int num,x;

    scanf("%d", &num);

    int array1[num],array2[num];

    for(x = 1; x <= num; x++)
    {
        scanf("%d ", &array1[x]);
        array2[x] = array1[x];
    }

    int i,j;
    
    int count;
    int pass = 0;

    for(i = 1; i <= num; i++)
    {
        count = 0;
        
        for(j = 1; j <= num; j++)
        {
            if(array1[i] == array2[j])
                count++;
        }
        if(count >= 2)
            pass++;
    }

    if(pass >= 2)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}
