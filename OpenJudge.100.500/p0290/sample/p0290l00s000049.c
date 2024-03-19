#include <stdio.h>

int main(void) {
  int a = 0,n,m,i,j;
  scanf(" %d",&n);
  for(i = 0; i < n; i++){
    scanf("%d",&m);
    for(j = 2; j < m; j++){
      if(m % j == 0)break;
    }
    if(j == m)a++;
  }
  printf("%d\n",a);
}
