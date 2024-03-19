#include <stdio.h>
	
int main(){
	int i,j,k;
	int n,sum,count;
	
	for(i=0;i<30;i++){
		if(EOF == scanf("%d",&n)) break;
		sum = 0;
		for(j=2;j<=n;j++){
			count = 1;
			for(k=2;k<j;k++){
				if(j%k==0) count = 0;
			}
			sum += count;
		}
		printf("%d\n",sum);
	}
	
	return 0;
}