#include<stdio.h>
int main(){
  int a,e,k;
  scanf("%d %d %d",&a,&e,&k);
  if(e-a<k){
    printf("Yay!");
  }
  else {
    printf(":(");
  }
  return 0;
}