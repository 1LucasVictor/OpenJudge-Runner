#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3],i,f1=0,f3=0,f2=0,sum=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    /*for(i=0;i<2;i++)
    {
        if(arr[i]==5)
        {
            f1=1;
            continue;
        }
        if(arr[i]==5&&f1==1)
        {
            f2=1;

        }
        if(arr[i]==7)
        {
            f3=1;

        }*/
        if(sum==17)
            printf("YES");
        else
            printf("NO");


    return 0;
}
