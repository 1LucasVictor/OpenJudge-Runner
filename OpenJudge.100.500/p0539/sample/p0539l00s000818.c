#include<stdio.h>
int main(void)
{
    int N,k=0;
    scanf("%d",&N);
    for(int i=1;i<10;i++ )
    {
        if((N%i)==0&&(N/i)<10)
        {
            k=k+1;
        }

    }
    if(k==0)
    {
         printf("%s\n","No");
    }
    else
    {
        printf("%s\n","Yes");
    }

    return 0;
}