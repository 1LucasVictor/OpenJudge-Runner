#include<stdio.h>
#define N 10000

int main(){
  int x=0,n;
  int A[N];
  int i,j;

  int bool=0;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
  }

  for(i=0;i<n;i++){
    for(j=2;j<A[i];++j){
      if(A[i]%j==0){
	bool = 1;
	break;
      }
    }
    if(bool==0) x++;
    bool = 0;
  }

  printf("%d\n",x);

  return 0;
}

