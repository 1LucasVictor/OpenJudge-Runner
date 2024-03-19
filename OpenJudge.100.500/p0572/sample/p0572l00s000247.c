#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
  int L,R;
  scanf("%d %d",&L,&R);
  int A[2019];
  for (int i=0;i<2019;i++){
    A[i]=0;
  }
  for (int i=L;i<=R;i++){
    for(int j=i+1;j<=R;j++){
      if (i<j){
        A[(i*j)%2019]=1;
      }
    }
  }
  for (int i=0;i<2019;i++){
    if(A[i]!=0){
      printf("%d",i);
      break;
    }
  }
  return 0;
}
