#include<stdio.h>

int main(){
  int a, b, c, k; 
  int sum = 0;
  scanf("%d %d %d %d",&a,&b,&c,&k);
  for(int i=0; i<k; i++){
    if(a>0){
      sum += 1;
      a--;
    }
    else if(b>0){
      b--;
    }
    else
      sum--;
  }
  printf("%d",sum);
  return 0;
}