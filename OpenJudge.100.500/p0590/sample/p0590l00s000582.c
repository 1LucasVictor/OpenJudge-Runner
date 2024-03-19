#include<stdio.h>
#include<math.h>
int main()
{
    int k,a[5],i,j;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)
            if(a[i]-a[j]>k||a[j]-a[i]>k)
                break;
    if(i>=5&&j>=5)
        printf("Yay!\n");
    else
        printf(":(\n");
    return 0;
}