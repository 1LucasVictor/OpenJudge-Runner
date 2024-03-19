#include<stdio.h>
int main()
{
  	int a;
    float b,s;
    scanf("%d%f",&a,&b);
    s=a*b;
    s=(int)s;
    printf("%.0f",s);
    return 0;
}
