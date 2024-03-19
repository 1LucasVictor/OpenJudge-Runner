#include <stdio.h>

int main(void)
{
  int i,j,k;

  scanf("%d%d%d",&i,&j,&k);
  if(i<j&&j<k){
    puts("Yes");
  }else{
    puts("No");
  }
  return 0;
}

