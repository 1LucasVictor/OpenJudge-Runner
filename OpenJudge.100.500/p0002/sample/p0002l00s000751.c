#include<stdio.h>
int main(void)
{
  int a,b,c,i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d %d %d",&a,&b,&c);
    a=a*a;
    b=b*b;
    c=c*c;
    if(a+b==c ||b+c==a||c+a==b)
      printf("YES");
    else
      printf("NO");
  }
}