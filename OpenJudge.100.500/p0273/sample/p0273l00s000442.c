#include<stdio.h>

int fibonacchi(int);

int main()
{
  int index_of_fibonacchi;

  scanf("%d",&index_of_fibonacchi);
  printf("%d\n",fibonacchi(index_of_fibonacchi));


}


int fibonacchi(int i)
{

  if(i == 0 || i == 1) return 1;
  if(i - 1 >=0 ) return fibonacchi(i -1) + fibonacchi(i - 2);


}

