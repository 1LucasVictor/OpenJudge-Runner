#include <stdio.h>

int main(){
  int n,f = 0;
  scanf("%d", &n);
  for(int i=1;i<=100;i*=10){
    if((n/i)%10 == 7){
      printf("Yes\n");
      f=1;
      break;
    }
  }
  if(f==0) printf("No\n");

  return 0;
}
