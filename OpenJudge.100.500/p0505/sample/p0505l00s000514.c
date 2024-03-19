#include <stdio.h>

int main(void){
  
  int H,N,a,i;
  int sum=0;
  
  scanf("%d",&H);
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&a);
    sum += a;
  }
  
  if(sum < H) printf("No\n");
  if(sum >=H) printf("Yes\n");
  
  return 0;
}