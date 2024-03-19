#include<stdio.h>
#define N 10000

int main(){
  int n,num[N],i,j,count=0;

  scanf("%d",&n);

  for(i=0;i<n;i++)scanf("%d",&num[i]);

  for(i=0;i<n;i++){
    if(num[i]==2 || num[i]==3 || num[i]==5 || num[i]==7)continue;
    if(num[i]%2==0 || num[i]%5==0 || num[i]%3==0||num[i]%7==0){
      count+=1;
      continue;
    }
    for(j=11;j<num[i]/2;j+=2){
      if(num[i]%j==0){
	count+=1;
	break;
      }
    }
  }
  printf("%d\n",n-count);
  
  return 0;
}