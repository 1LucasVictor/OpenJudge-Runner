#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,i,j,flag=0;
    scanf("%d",&x);
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(x==i*j)
            {
                flag++;
            }
        }
    }
    if(flag!=0)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
}
