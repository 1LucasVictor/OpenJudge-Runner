#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
#define PI 3.14159265359
#define N_MAX 10000
#define NUM 1000
#define min(x,y) ((x) < (y) ? (x) : (y))
#define max(x,y) ((x) > (y) ? (x) : (y))

bool prime(const int n)
{
  int i;
  if(n <= 1) return false;
  if(n == 2) return true;
  for(i = 2; i <= sqrt(n); i++)
    {
      if(n%i == 0) return false; 
    }
  return true;
}

int main()
{
  int i,n,count = 0,a[N_MAX];
  scanf("%d",&n);
  for(i = 0; i < n; i++) scanf("%d",&a[i]);
  for(i = 0; i < n; i++)
    {
      if(prime(a[i])) count++;
    }
  printf("%d\n",count);
  return 0;
}