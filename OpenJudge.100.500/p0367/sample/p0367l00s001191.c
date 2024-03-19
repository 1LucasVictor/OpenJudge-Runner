#include <stdio.h>

int main(void){
  int a,b,c;
  int cnt=0;
  
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);

  for(;a<=b;a++){
    if(c%a==0){
      cnt++;
    }
  }

  printf("%d\n",cnt);

  return 0;
}