
#include<stdio.h>

int main(){
  int n,i,A[10000],j,count=0,t=-1;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
    if(A[i]==1)continue;
    else if(A[i]==2){
      count++;
      continue;
    }
    else if(A[i]%2==0)continue;
    else if(A[i]==3){
      count++;
      continue;
    }
    else{
      for(j=3;j<A[i];j++){
	if(A[i]%j==0)break;
	else t=1;
      }
      if(t==1){
	count++;
	t=-1;
      }
    }
  }
  printf("%d\n",count);
  return 0;
}

 

