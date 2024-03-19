#include<stdio.h>
int main()
{
    int a[3],i,j,temp,loc,min;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<(3-1);i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<3;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                loc=j;
            }
 }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;


    }
    for(i=0;i<3;i++){
        if(i!=(3-1))
            printf("%d ",a[i]);
        else
            printf("%d\n",a[i]);
    }
}

