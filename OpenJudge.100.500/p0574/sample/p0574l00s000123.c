#include <stdio.h>

int main(){
  int s,a[4];
  scanf("%d",&s);
  for(int i=0;i<4;i++){
    a[i] = s%10;
    s /= 10;
  }
  if(a[0] == a[1] || a[1] == a[2] || a[2] == a[3] )printf("Bad\n");
  else printf("Good\n");
  return 0;
}
