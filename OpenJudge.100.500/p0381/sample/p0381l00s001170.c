#include <stdio.h>

int main(void)
{
	int x, n;
	int i,j,k;
	int count=0;

	while(1){
		scanf("%d %d", &n, &x);
		if(n==0 && x == 0)
			break;
		for(i=1; i<n-1; i++){
			for(j=i+1; j<n; j++){
				for(k=j+1; j<=n; j++){
					if(i+j+k == x)
						count++;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}