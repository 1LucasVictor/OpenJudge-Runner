#include<stdio.h>
int main(){
  int count,prime=0,num[1000];
  int i,j,N;

  scanf("%d",&count);

  for(i=0;i<count;i++){
	scanf("%d",&num[i]);
  }

  for(i=0;i<count;++i){
      j=2;
    while(num[i]%j!=0) ++j;
    if(j==num[i]) ++prime;
    }
  
  printf("%d\n",prime);

  return 0;
}