#include <stdio.h>
int main(void){
  int a,b,i;
  int c[200000];
  scanf("%d",&a);
  for(i=0;i<a;i++){
    c[i]=0;
  }
  for(i=0;i<a-1;i++){
    scanf("%d",&b);
    c[b-1]++;
  }
 for(i=0;i<a;i++){
  printf("%d\n",c[i]);
 }
  return 0;
}
