#include <stdio.h>

int main(void){
	int i,j,k,n,x,A=0;
	scanf("%d %d",&n,&x);
	for(i=1;i<n;i++){
		for(j=i+1;j<n;j++){
			for(k=j+1;k<=n;k++){
				if(i+j+k==x) A++;
			}
		}
	}
	printf("%d\n",A);
	return 0;
}