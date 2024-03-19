#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int ar[a],arr[b];
    for(int i=0;i<a;i++) scanf("%d",&ar[i]);
    for(int i=0;i<b;i++) scanf("%d",&arr[i]);
    int s=0,q=2;
    for(int i=0;i<a||i<b;i++)
    {
        if(ar[i]>c)
        {
            printf("0");
            break;
        }
        s+=ar[i]+arr[i];
        if(s>=c)
        {
            printf("%d",q-1);
            break;
        }
        q+=2;
    }
}
