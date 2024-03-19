#include <stdio.h>
int x[1000000];
  int main(){
   int i,j,n,hantei=0;
   int sum=0;
    while(scanf("%d",&n) != EOF){
		for(i=2;i<=n;i++){
			x[i]=1;
		}
	for(i=2;i<=n;i++){
		if(x[i]==1){
			sum++;
		}
		for(j=2;i*j<=n;j++){
			x[i*j]=0;
		}
	}
	
	printf("%d\n",sum);
	sum=0;
	}
      return 0;
	}