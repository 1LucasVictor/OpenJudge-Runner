#include <stdio.h>

int judge(int n)
{
  int i;
  int small = 1, large = n;

  for(i=2;i<=9;i++){
    if(n%i==0){
      small = i;
      large = n/small;
    }
  }

  if(large<=9)return 1;
  else return 0;
}

int main(void)
{
  int N;
  scanf("%d",&N);
  if(judge(N))puts("Yes");
  else puts("No");

  return 0;
}
