#include<stdio.h>
int main()
{
    int a,b,t,res;
    float time;
    scanf("%d%d%d",&a,&b,&t);
  if(a>=1&&a<=20&&b>=1&&b<=20&&t>=1&&t<=20)
    {
    	time=t+0.5;
    	res=(time/a);
    	printf("%d\n",res*b);
    }
    return 0;
}