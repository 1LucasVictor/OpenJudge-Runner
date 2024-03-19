#include <stdio.h>

int main(){
	int n,x;
	int i,j,k;
	int num=0;

	while(1){
		scanf("%d %d",&n,&x);
		if(n==0 && x==0)
			break;

		for(i=1; i<=n; i++){
			for(j=1; j<=n; j++){
				for(k=1; k<=n; k++){
					if(i+j+k==x && i!=j && i!=k && j!=k)
						num++;
				}
			}
		}
		printf("%d\n",num/6);
		num=0;
	}

	return 0;
}