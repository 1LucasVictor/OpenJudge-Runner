#include<stdio.h>

int main()
{
	int a,b,arr[9],r,i,j;
	scanf("%d %d",&a,&b);

	arr[1]=a+b;
	arr[2]=a-b;
	arr[3]=a*b;

	for(i=1;i<=3;i++)
    {
        for(j=i;j<=3;j++)
        {
            if(arr[j]>=arr[i])
            {
                r=arr[i];
                arr[i]=arr[j];
                arr[j]=r;
            }
        }
    }

    printf("%d",arr[1]);

    return 0;

}
