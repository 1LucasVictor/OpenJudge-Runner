#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(p,q) ((p>q)?(p):(q))
#define MIN(p,q) ((p<q)?(p):(q))

#define REP(i,n) for(i=0;i<n;i++)

int gcd(int a,int b);

int main(void)
{
  int d,n;
  scanf("%d%d",&d,&n);
  //pow使うからだめ
  //愚直に場合分けせよ
  if(d==0)
  {
    if(n==100) printf("101\n");
    else printf("%d",n);
  }
  else if(d==1)
  {
    if(n==100) printf("1010\n");
    else printf("%d",n*10);
  }
  else
  {
    if(n==100) printf("10100\n");
    else printf("%d",n*100);
  }
  return 0;
}

int gcd(int a,int b)
{
  int max,min,tmp;
  max = MAX(a,b);
  min = MIN(a,b);
  if(max%min==0) return min;
  else
  {
    tmp = min;
    min = max%min;
    max = tmp;
    return gcd(max,min);
  }
}
