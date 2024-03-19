#include<stdio.h>

int main(){
  int a[5],k,i,j,flag = 1;
  for(i = 0;i < 5;i++){
    scanf("%d",&a[i]);
  }scanf("%d",&k);
  for(i = 1;i < 5;i++){
    for(j = 0;j < i;j++){
      if(a[i]-a[j] > k||a[j]-a[i] > k){flag = 0;}
    }
  }if(flag){printf("Yay!\n");}
  else{printf(":(\n");}
  return 0;
}