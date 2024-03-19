#include<stdio.h>
int main(void){
  int a,j,i;
  scanf("%d",&a);
  for(i=1;i<=9;i++){
    for(j=1;j<=9;j++){
      if(i*j==a){
        printf("Yes\n");
        return 0;
      }
    }
  }printf("No\n");
  return 0;
}