#include<stdio.h>

main(void){
  
  int H,N,A,v,i;
  
  scanf("%d %d",&H,&N);
  v = 0;
  for(i = 0; i < N; i = i + 1){
    scanf("%d",&A);
    v = v + A;
  }
  if(H > v){
    printf("No");
  }
  else{
    printf("Yes");
  }
  return 0;
}
  
    