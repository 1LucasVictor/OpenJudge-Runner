#include <stdio.h>

int Prime_numbers(int);

int main(){
  int N,n,i,j=0;

  scanf("%d",&N);

  for(i=0;i<N;i++){
    scanf("%d",&n);
    if(Prime_numbers(n)==1)j++;
  }

  printf("%d\n",j);

  return 0;
}

int Prime_numbers(int n)
{
  int i,flag=0;
  
  if(n==2)return 1;
  if(n==3)return 1;

    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)return 0;
    }

    return 1;
}
