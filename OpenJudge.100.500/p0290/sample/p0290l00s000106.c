#include<stdio.h>
int main(){
  int n,i,j,A[10000],flag,count=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
    flag=0;
    for(j=2;j<A[i];j++){
      if(A[i]%j==0){
	flag = 1;
	break;
      }
    }
    if(flag == 0){
      count++;
    }
  }
  printf("%d\n",count);
  return 0;
}

