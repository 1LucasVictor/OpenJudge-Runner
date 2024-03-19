#include <stdio.h>
int main() {
  int a,b,c,d,e,k;
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  scanf("%d",&k);
  if(k>=e-a){
    printf("Yay!");
  }else{
    printf(":(");
  }
  return 0;
}
