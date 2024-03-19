#include <stdio.h>

int main(){
  int a=0;
  int count=0;
  scanf("%d", &a);
  if(a>=500){
    count+=(1000*(a/500));
    a-=(a/500)*500;
  }
  count+=(5*(a/5));
  printf("%d\n", count);
  return 0;
}
