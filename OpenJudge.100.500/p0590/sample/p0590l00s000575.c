#include <stdio.h>

int main(){
  int a[5],k;
  for(int i = 0; i < 5; ++i){
    scanf("%d\n",&a[i]);
  }
  scanf("%d",&k);
  int dis = a[4] - a[0];
  int flag = 0;
  if(dis > k) flag = 1;
  if(flag == 0) printf("Yay!\n");
  else printf(":(\n");
  return 0;
}