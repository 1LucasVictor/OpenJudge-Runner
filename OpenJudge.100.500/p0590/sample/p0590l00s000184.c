#include <stdio.h>
int main(){
 int a,e,k;
  scanf("%d",&a);
  for(int i=0;i<4;i++)scanf("%d",&e);
  scanf("%d",&k);
  (k>=e-a)?puts("Yay!"):puts(":(");
 return 0;
}