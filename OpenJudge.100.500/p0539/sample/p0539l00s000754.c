#include<stdio.h>
#include<stdlib.h>
int main(){
  int n,i,j;
  scanf("%d",&n);
  for(i=1;i<10;i++){
    for(j=1;j<10;j++){
      if(n == i*j){
        printf("Yes");
        exit(0);
      }
    }
  }
  printf("No");
}