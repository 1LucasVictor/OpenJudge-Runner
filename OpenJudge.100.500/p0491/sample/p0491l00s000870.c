#include<stdio.h>
#include <stdlib.h>
int main(){
    int n,k;
  	scanf("%d %d",&n,&k);
  	int min=0,ans=0;
  	min=n;
  	ans=abs(n-k);
  	while(min!=ans){
		ans=abs(ans-k);
      if(ans<min){
        min = ans;
      }
    }
  printf("%d\n",min);
}

