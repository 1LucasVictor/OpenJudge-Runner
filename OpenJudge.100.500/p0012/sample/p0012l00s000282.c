#include <stdio.h>

#define N 10

int main()
{
  int i,x,top=0;
  int stack[N];
  for (i=0;i<N;i++)
    stack[i]=0;

  while (scanf("%d",&x)!=EOF){
    if (x!=0){
      stack[top]=x;
      top++;
    }else{
      top--;
      printf("%d\n",stack[top]);
    }
  }

  return 0;
}