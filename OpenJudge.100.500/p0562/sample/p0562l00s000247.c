#include<stdio.h>
int main(void){
  int a,b;
  scanf("%d %d",&a,&b);
  int ans=0;
  int outlet=1;
  while (outlet < b) {
   --outlet;
   outlet += a;
   ++ans;
 }
  printf("%d\n",ans);
  return 0;
}