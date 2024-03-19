#include<stdio.h>

int main(){
  int a,i,j;
  scanf("%d",&a);
  for(i=1;i<=9;i++){
    for(j=1;j<=9;j++){
      if(i*j==a){
      	printf("Yes");
        return 0;
      }
    }
  }
  printf("No");
  return 0;
}