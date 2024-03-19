#include <stdio.h>
int main()
{
    int a,flag=1,i,j,b[1000];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(b[i]==b[j])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
