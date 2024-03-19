#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100000000
#define NIA 10000
#define in 1
#define out 2

int main(){
  int i,j,n,C[NIA],co=0;

  scanf("%d",&n);
  if(n>NIA||n<in){
    exit(1);
  }

  for(i=n;i>0;i--){
    scanf("%d",&C[i]);
    if(C[i]>=out&&C[i]<=MAX){
      if(C[i]!=2&&C[i]%2==0){
	co++;
      }
      else{
	for(j=3;j<=sqrt(C[i]);j+=2){
	  if(C[i]%j==0){
	    co++;
	    break;
	  }
	}
      }
    }
    else break;
  }

  printf("%d\n",n-co);

  return 0;
}

