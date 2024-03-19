#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 九九の表 */
    int* l=(int*)malloc(sizeof(int)*100);
    int i,j;
    int count=0;
    for (i=0;i<=9;i++)
    {
        for (j=i;j<=9;j++)
        {
            l[count]=i*j;
            count++;
        }
    }

    int n;
    scanf("%d",&n);
    for (i=0;i<count;i++)
    {
        if(l[i]==n)
        {
            printf("Yes\n");
            free(l);
            return 0;
        }
        
        
    }
    printf("No\n");
    free(l);
    return 0;
}