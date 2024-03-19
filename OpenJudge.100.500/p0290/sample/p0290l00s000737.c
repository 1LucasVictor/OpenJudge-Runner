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
      N=num[i]/2;
    while(num[i]%j!=0){
	if(N==j) break;
	++j;
    }
    if(num[i]==2*j||num[i]==(2*j)+1) ++prime;
    }
  
  printf("%d\n",prime);

  return 0;
}