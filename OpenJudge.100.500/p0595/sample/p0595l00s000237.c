#include<stdio.h>
int main()
{

    int a,b,k;
    scanf("%d %d %d",&a,&b,&k);
    if(a%k==0&&b%k==0)
        printf("%d\n",k);
    else if(a%(k+1)==0&&b%(k+1)==0)
        printf("%d\n",k+1);
    return 0;
}
