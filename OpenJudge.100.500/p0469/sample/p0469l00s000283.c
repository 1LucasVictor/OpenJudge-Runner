#include<stdio.h>
int main ()
{
    int flag=1,n1,n2,i,a;
    scanf("%d",&a);
    scanf("%d %d",&n1,&n2);
    for (i=n1;i<=n2;i++)
    {
        if (i%a==0)
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
        printf("NG");
    else
        printf("OK");


}
