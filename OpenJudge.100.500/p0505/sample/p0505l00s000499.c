#include<stdio.h>


int main()
{

    int a,b,c;

    scanf("%d%d",&a,&b);

    int A[b],sum=0;


    for(int i=0;i<b;i++)
    {
        scanf("%d",&A[i]);
        sum=sum+A[i];

    }


    if(sum<a) printf("No\n");
    else printf("Yes\n");


    return 0;

}
