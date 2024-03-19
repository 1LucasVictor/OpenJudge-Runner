#include<stdio.h>
int main()
{
    int A[5],s=0,t=0,i=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&A[i]);
        if(A[i]==5)
        {
            s++;

        }
        if(A[i]==7)
        {
            t++;
        }
    }
    if((s==2)&&(t==1))
    {
        printf("YES\n");
    }
    else
    {
         printf("NO\n");
    }
}
