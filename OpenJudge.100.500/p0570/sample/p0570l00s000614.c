#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a,b,k;

    scanf("%d%d",&a,&b);
    k=(a+b)/2;
    if(abs(a-k)==abs(b-k))
      printf("%d\n",k);
    else
      printf("IMPOSSIBLE\n");

    return 0;
}
