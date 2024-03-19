#include<stdio.h>
int main()
{
    int a[4],i,count=0,count1=0;
    for(i=0; i<3; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<3; i++)
    {
        if(a[i]==5)
            count++;
    }
    for(i=0; i<3; i++)
    {
        if(a[i]==7)
            count1++;
    }
    if(count==2 && count1==1)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
