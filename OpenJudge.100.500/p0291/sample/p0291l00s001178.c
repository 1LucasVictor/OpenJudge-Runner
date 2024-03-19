#include<stdio.h>

int main(){

  int i, j, max, n;
  int R[200000];

  scanf ("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%d",&R[i]);
  }
  max = R[1]-R[0];

  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(R[j]-R[i]>max){
        max = R[j]-R[i];
      }
    }
  }

  printf("%d\n",max);

  return 0;
}

    