#include<stdio.h>

int main(){


  int a[5];
  int i=0,k;

  while(i < 5){
    scanf("%d",&a[i]);
    i++;
  }
  scanf("%d",&k);

  if(a[4] - a[0] < k){
    printf("Yay!\n");
  }else{
    printf(":(\n");
  }

  return 0;

}
