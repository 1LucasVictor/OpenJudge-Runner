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
  int a,b;
  scanf("%d%d",&a,&b);
  if(a<9&&b<9) printf("Yay!");
  else printf(":(");
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
