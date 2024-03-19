#include<stdio.h>
#define N 44
int fibonach(int );

int main()
{
  int fn,n;

  scanf("%d",&n);

  fn = fibonach(n);

  printf("%d\n",fn);
  
  return 0;
}


int fibonach(int n)
{
  /*
  int i,a[N];

  for(i=0;i<=n;i++)
    {
      if(i == 0) a[i] = 1;
      else if(i == 1) a[i] = 1;
      else a[i] = a[i-2] + a[i-1];
    }

    return a[i-1];*/

  //再帰版
  
    if(n == 0 || n == 1) return 1;
    return fibonach(n - 1) + fibonach(n - 2);
   
}

