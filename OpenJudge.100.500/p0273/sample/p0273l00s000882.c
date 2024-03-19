//Fibonacci Number

#include<stdio.h>
#define N 44

int i,arr[N];

//If you call a recursive function, the calculatino become so slow.
//So, you have to use like a for sentence. 

int fib(int n)
{
  arr[0] = 1;
  arr[1] = 1;
  
  for(i = 2; i < n; i++)
    {
      arr[i] = arr[i - 2] + arr[i - 1];
    }

  if(n == 0 || n == 1) return 1;
  
  else return arr[i - 2] + arr[i - 1];
}

int main()
{
  int n;

  scanf("%d",&n);

  printf("%d\n",fib(n));

  return 0;
}

