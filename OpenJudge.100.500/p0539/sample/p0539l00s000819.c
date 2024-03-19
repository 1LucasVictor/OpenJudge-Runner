#include<stdio.h>
int main(void){
  int N,flag=0;
   scanf("%d\n",&N);
  for(int n=1;n<=9;n++){
    for(int j=n;j<=9;j++){
      if(n*j==N){
        flag=1;
        break;
      }
    }
  }
  if(flag==1)
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}