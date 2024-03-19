#include<stdio.h>
#include<math.h>

int main(){
  int i,j,N,num,A[10000];

  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }

  num=0;
  for(i=0;i<N;i++){
    if(A[i]==2){
      num++;
      continue;
    }
    else if(A[i]<2 || A[i]%2==0) continue;

    j=3;
    while(j<=(int)sqrt(A[i])){
      if(A[i]%j==0) break;
      j=j+2;
    }
    
    if(j>(int)sqrt(A[i])) num++;
  }
  
  printf("%d\n",num);
  
  return 0;
}
  