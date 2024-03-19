#include<stdio.h>
int main(){
  int N,x,i,a;
  x=0;
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&a);
    if(a%2==0){
      if(a%3!=0 && a%5!=0){
        x=1;
        break;
      }
    }
  }
  if(x==0)
    printf("APPROVED\n");
  else
    printf("DENIED\n");
  return 0;
}