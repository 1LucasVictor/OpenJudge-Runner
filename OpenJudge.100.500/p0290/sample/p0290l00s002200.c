#include<stdio.h>
#include<math.h>
#define N 10000
int main(){
  int i,n,j,num[N],count=0;
  scanf("%d",&n);
  if(n>N) return 0;
  for(i=n;i>0;i--){
    scanf("%d",&num[i]);
    if(num[i]>=2&&num[i]<=100000000){
      if(num[i]!=2&&num[i]%2==0) count++;
      else{
	for(j=3;j<=sqrt(num[i]);j+=2){
	  if(num[i]%j==0){
	    count++;
	    break;
	  }
	}
      }
    }
    else break;
  }
  printf("%d\n",n-count);
  return 0;
}

