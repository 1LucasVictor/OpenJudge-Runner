#include<stdio.h>
int main(void){
  int in;
  int n;
  scanf("%d",&n);
  for (int i = 0; i < n; i++){
    scanf("%d",&in);
    if(in%2==0){
      if(in%3==0||in%5==0){}
      else{
        printf("DENIED");
        return 0;       
      }
    }
  }
  printf("APPROVED");
  return 0;
}