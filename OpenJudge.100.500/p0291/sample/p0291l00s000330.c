#include<stdio.h>

int main(){
  int n,max,sum;
  int i,check=0,mark=0;

  scanf("%d",&n);

  int R[n];
  for(i=0;i<n;i++){
    scanf("%d",&R[i]);
  }

  max = sum = R[1] - R[0];
  if(max>0) check=1;

  for(i=2;i<n;i++){
    if((R[i]-R[i-1])>0){
      if(check){
        sum += R[i]-R[i-1];
      }
      else {
        check=1;
        max = sum = R[i]-R[i-1];
      }
    }else{
      if(check){
        if(max<sum) max = sum;
        sum = 0;
        check = 0;
      }
      if(!check && (R[i]-R[i-1])>max){
        max = R[i]-R[i-1];
      }
    }
  }

  printf("%d\n",max);
  return 0;
}

