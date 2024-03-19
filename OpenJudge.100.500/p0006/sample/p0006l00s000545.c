#include <stdio.h>

int main(){
  int debt,i,n;
  while(scanf("%d",&n)!=EOF){
	debt=100000;
	for(i=0;i<n;i++){
	  debt = (debt*1.05+999)/1000;
	  debt = debt*1000;
	}
	printf("%d\n", debt);
  }
  return 0;
}