#include <stdio.h>
int main(void){
    int n,x;
	while(1){
	    int m=0;
		scanf("%d %d",&n,&x);
		if(n==0&&x==0) break;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int k=1;k<=n;k++){
					if(i<j&&j<k){
						if(i+j+k==x){
							m++;
						}
					}
				}
			}
		}
		printf("%d\n",m);
	}
	return 0;
}
