#include<stdio.h>
int main(void){
  int a[3];
  int i, ans=0;
  for(i=0;i<3;i++){
    scanf("%1d", &a[i]);
    if(a[i]==1){
      ans++;
    }
  }
  printf("%d\n", ans);
  return 0;
 }