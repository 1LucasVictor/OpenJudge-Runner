#include <stdio.h>

#define MAX 1000000

int main(void){
  char p[MAX];
  int n,i,c;
  memset((void *)p,1,MAX);
  p[1] = 0;
  for(n = 2,c = 0;n*n <= MAX;n++){
    if(p[n] == 1){
//      c += 1;
      for(i = n+n;i <= MAX;i += n)
        p[i] = 0;
    }
//    p[n] = c;
  }

  while(scanf("%d",&n) != EOF){
    for(i = 1,c = 0;i <= n;i++)
      if(p[i] == 1)c++;
    printf("%d\n",c);
  }
  return 0;
}