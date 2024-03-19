#include <stdio.h>

int prime(int num)
{
  int i;

  for(i=2;i<num/2+1;i++){
    if(num % i == 0)return 0;
  }

  return 1;
}

int main(void){
  int n;
  int i,cnt;
  while(scanf("%d",&n) != EOF){
    cnt=0;
    for(i=2;i<=n;i++){
      if(prime(i))cnt++;
    }

    printf("%d\n",cnt);
  }

  return 0;
}