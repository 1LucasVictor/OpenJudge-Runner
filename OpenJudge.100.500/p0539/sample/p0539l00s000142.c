#include<stdio.h>
int main(){
  int n;
  int a;
  scanf("%d",&n);
  if(n>81){
    printf("No");
  }
  else if(n<10){
    printf("Yes");
  }
  else{
    for(int i=9;i>1;i--){
      if(n%i==0){
        a=n/i;
        if(a<10){
          printf("Yes");
          break;
        }
        else{
          printf("No");
          break;
        }
      }
      else{}
      //printf("No");
    }
  }
  return 0;
}