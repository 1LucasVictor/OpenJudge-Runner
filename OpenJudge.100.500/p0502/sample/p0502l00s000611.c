#include <stdio.h>

int main(void){
  int i,t,N;
  int a[100];
  t = 0;
  scanf("%d", &N);
  for(i=0;i<N;i++){
    scanf("%d", &a[i]);
    if(a[i]%2==0 && t == 0){
      if(a[i]%3!=0 && a[i]%5!=0)
        t = 1;
    }
  }
  if(t==1)
      printf("DENIED");
  else
      printf("APPROVED");
  return 0;
}