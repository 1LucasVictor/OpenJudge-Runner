#include <stdio.h>
#include <stdlib.h>

int main()
{
int i , j , result=0 , k=0  ;
int distance[5];
for(i=0;i<5;i++)
    scanf("%d\n",&distance[i]);
scanf("%d",&k);
for(i=0;i<5;i++)
    {
    for(j=i+1;j<5;j++)
        {
        if(distance[j]-distance[i]<=k)
            result++;
        }
    }
    if(result==10)
        printf("Yay!");
    else
        printf(":(");
}
