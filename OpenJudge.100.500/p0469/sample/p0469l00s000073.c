#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){

  int k,i;
  int a,b;
  int flag = 0;

  scanf("%d", &k);
  scanf("%d %d", &a, &b);

  i = k;

  while(i <= b){
    if(i <= b && i >= a){
      flag = 1;
      break;
    }

    i += k;
  }

  if(flag) printf("OK\n");

  else printf("NG\n");

  return 0;
}
