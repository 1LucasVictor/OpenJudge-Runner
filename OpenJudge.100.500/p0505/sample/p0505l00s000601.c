#include <stdio.h>

int main(void){

  int H, N;
  scanf("%d %d",&H,&N);
  int arr[N];
  int i, count=0;
  for(i=0;i<N;i++){
    scanf("%d",&arr[i]);
    count+=arr[i];
  }
  if(count>=H){
    printf("Yes");
  }
  else{printf("No");
  }
  

  return 0;
}
