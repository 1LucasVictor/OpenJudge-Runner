#include<stdio.h>
int main()
{
    unsigned long long int a,b,sum;
    while(scanf("%llu %llu",&a,&b)!=EOF)

    {

    int cnt=0;
      sum=a+b;
      while(sum!=0){
        sum=sum/10;
        cnt++;
      }
      printf("%d\n",cnt);
    }
return 0;
}

