#include <stdio.h>

int main()
{
	int n,x,i,j,k,t;
	
	while (1) {
		scanf("%d %d", &n, &x);
		t = 0;
		if (n == 0 && x == 0) break;
	
		for(i=1;i<=n;i++){
			for(j=i+1;j<=n;j++) {
				for(k=j+1;k<=n;k++) {
					if(i+j+k == x)		t++;
				}
			}
		}
		printf("%d\n",t);
	}
	
	return 0;
}
	
