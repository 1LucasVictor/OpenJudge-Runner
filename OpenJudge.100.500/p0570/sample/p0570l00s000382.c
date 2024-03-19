#include<stdio.h>
typedef long long ll;



int main(void)
{
    int a,b;
    scanf("%d%d",&a,&b);
    int k;
    if((a*a - b*b)%(2*a - 2*b) == 0  )
    {
        k = (a*a - b*b)/(2*a - 2*b);
        printf("%d\n",k);
    }
    else
    {
        printf("IMPOSSIBLE\n");
    }

}
