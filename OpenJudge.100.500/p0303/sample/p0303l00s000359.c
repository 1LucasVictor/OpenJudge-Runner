#include<stdio.h>
int main(){

  int i;
  int n,k;
  int count=0,sum=0,P=0;
  
  scanf("%d%d",&n,&k);
  int N[n];
  for(i=0;i<n;i++){
    scanf("%d",&N[i]);
    sum+=N[i];
  } 
  P=sum/k;
  sum=0;
  while(1){
    for(i=0;i<n;i++){
      sum+=N[i];
      if(P<sum){
	sum=0;
	i--;
	count++;
	if(count>=k){
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

