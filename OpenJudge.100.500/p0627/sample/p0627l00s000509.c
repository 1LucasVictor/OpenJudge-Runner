#include<stdio.h>
int main()
{int m,n,max,a,b,c;
  while(scanf("%d %d",&m,&n)!=EOF)
  { a=m+n;
    max=a;
    b=m-n;
    c=m*n;
    if(b>max)
    max=b;
    if(c>max)
    max=c;
    printf("%d\n",max);
  }
  return 0;
}