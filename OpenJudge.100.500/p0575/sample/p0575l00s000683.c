#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(p,q) ((p>q)?(p):(q))
#define MIN(p,q) ((p<q)?(p):(q))

#define INF 1000000000;
#define REP(i,n) for(i=0;i<n;i++)

int gcd(int a,int b);
/*比較函数の実装
int -32768 to 32767 (2**15-1)
long -2147483648 to 2147483648 (2**31-1)
*/
int intcmp(const void *a,const void *b){
  return *(int *)a - *(int *)b;
}
//qsort(a,sizeof(a)/sizeof(int),sizeof(int),intcmp);
int longcmp(const void *a,const void *b){
  return *(long *)a - *(long *)b;
}
//qsort(a,sizeof(a)/sizeof(long),sizeof(long),longcmp);
int doublecmp(const void *a, const void *b){
  return *(double *)a - *(double *)b;
}
//qsort(a,sizeof(a)/sizeof(double),sizeof(double),doublecmp);
int main(void)
{
  int x,a;
  scanf("%d%d",&x,&a);
  if(x<a)printf("0");
  else printf("10");
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
