#include <stdio.h>
#define MAX 3000

int main(void)
{
  int i, j,n,count = 0;
  int p[1000000];

  //---初期化---
  while(scanf("%d",&n) != EOF){
  	count = 0;
  for(i=0 ; i<n ; i++) p[i] = 0;
  p[0] = 1;
  //---倍数を除外---
  for(i=2 ; i<=n/2 ; i++){
    for(j=2 ; i*j<=n ; j++){
      if(p[i*j-1] == 0)
        p[i*j-1] = 1;
    }
  }
  for(i=0 ; i<n ; i++){
    if(p[i] == 0)
      count = count + 1;
  }
  printf("%d\n",count);
  }
  return 0;
}