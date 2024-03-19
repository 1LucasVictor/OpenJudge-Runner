#include <stdio.h>

int main(void){
	int i,j,k,n,x,A=0;
	scanf("%d %d",&n,&x);
	while(n!=0 && x!=0){
		for(i=1;i<n-1;i++){
			for(j=i+1;j<n;j++){
				for(k=j+1;k<=n;k++){
					if(i+j+k==x) A++;
				}
			}
		}
	printf("%d\n",A);
	scanf("%d %d",&n,&x);
	}
	return 0;
}