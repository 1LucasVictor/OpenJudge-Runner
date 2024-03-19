#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=1;i<10;i++)
    {
        if((N%i)==0&&(N/i)>0&&(N/i)<10)
        {
            printf("Yes");
            break;
        }
        
    }



}
