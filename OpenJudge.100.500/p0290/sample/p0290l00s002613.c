#include<stdio.h>
int main(){
  int count,prime=0,num[10000];
  int i,j,N;

  scanf("%d",&count);

  for(i=0;i<count;i++){
	scanf("%d",&num[i]);
  }

  for(i=0;i<count;++i){
      j=2;
      if(num[i]==2){
	++prime;
	continue;
      }
    while(num[i]%j!=0){ 
	++j;
    	if(num[i]/2<j){
	  ++prime;
	  break;
	}
      }
    }
  
  printf("%d\n",prime);

  return 0;
}