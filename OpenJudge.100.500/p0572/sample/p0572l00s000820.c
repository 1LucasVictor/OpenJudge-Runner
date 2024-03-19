#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){

  int i,j;
  int min = 100000000;
  int l,r;

  scanf("%d %d", &l, &r);

  l = l % 2019;
  r = r % 2019;

  for(i = l;i < r;i++){
    for(j = i + 1;j <= r;j++){
      if(min > (i*j) % 2019) min = (i*j) % 2019;
    }
  }

  printf("%d\n", min);
  return 0;
}
