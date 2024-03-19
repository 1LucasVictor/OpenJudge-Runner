#include<stdio.h>
int min(int a, int b)
{

if(a<b)

return a;

else if(b<a)

return b;

}
int main()
{
    int i,a,b,c,p,q;

        scanf("%d%d%d",&a,&b,&c);

    p=b*a;
    q=min(p,c);
    printf("%d",q);




    return 0;
}
