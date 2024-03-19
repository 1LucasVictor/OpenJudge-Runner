#include <stdio.h>
int main(void)
{
    int a,b,c,d,n;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<=c && d<=b)
      printf("0");
    else if(c<=a && b<=d)
      printf("0");
    else if(a<=c)
    {
        n=(b-a)+(d-c)-(d-a);
        if(n<1)
          printf("0");
        else
          printf("%d",n);
    }
    else
    {
        n=(b-a)+(d-c)-(b-c);
        if(n<1)
          printf("0");
        else
          printf("%d",n);
    }
}
