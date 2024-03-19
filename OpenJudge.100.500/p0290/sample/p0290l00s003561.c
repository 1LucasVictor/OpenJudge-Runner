#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define NMAX 10000
#define NMIN 1
#define MAX 100000000
#define MIN 2
int main(){
  int i,n,j,num[NMAX],count=0;
  scanf("%d",&n);
  if(n>NMAX||n<NMIN) exit(1);
  for(i=n;i>0;i--){
    scanf("%d",&num[i]);
    if(num[i]>=MIN&&num[i]<=MAX){
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

