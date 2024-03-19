#include <stdio.h>

int main(void) {
	int n;
	int count;
	int i,j;
	int sosuu;
	while(!feof(stdin)) {
		scanf("%d",&n);
		if(feof(stdin))break;
		count=0;
		for(i=2;i<=n;i++) {
			sosuu=1;
			for(j=2;j*j<=i;j++) {
				if(i%j==0) {
					sosuu=0;
					break;
				}
			}
			if(sosuu)count++;
		}
		printf("%d\n",count);
	}
	return 0;
}