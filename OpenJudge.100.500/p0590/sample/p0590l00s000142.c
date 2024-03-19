#include<stdio.h>
int main(void){
  int i,j,n;
  int a[5];
  for(i=0;i<5;i++){
    scanf("%d",&a[i]);
  }
  scanf("%d",&n);
  for(i=0;i<4;i++){
    for(j=i;j<5;j++){
      if(a[i]-a[j]>n || a[j]-a[i]>n){
        printf(":(\n");
        return 0;
      }
    }
  }
  printf("Yay!\n");
  return 0;
}