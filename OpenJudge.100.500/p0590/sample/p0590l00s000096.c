#include<stdio.h>

int main(){
  int a[6];
  int i, max = 0, min =0;
  for(i=0;i<6;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<5;i++){
    if(a[i]> max){
      max = a[i];
    }
    if(a[i] < min){
      min = a[i];
    }
  }
  if(max -min <= a[5]) printf("Yay!\n");
  else printf(":(\n");
  return 0;
}