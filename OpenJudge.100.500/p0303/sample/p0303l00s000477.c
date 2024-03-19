#include<stdio.h>
int main(){

  int i;
  int n,k;
  int count=1,sum=0,max=0,P=0;
  
  scanf("%d%d",&n,&k);
  int N[n];
  for(i=0;i<n;i++){
    scanf("%d",&N[i]);
    if(max<N[i]){
      max=N[i];
    }
  }
  P=max;
  while(1){
    for(i=0;i<n;i++){
      sum+=N[i];
      if(P<sum){
	sum=0;
	i--;
	count++;
	if(count>k){
	  count=1;
	  P++;
	  break;
	}
      }
    }
    break;
  }
  printf("%d\n",P);
  return 0;
}

