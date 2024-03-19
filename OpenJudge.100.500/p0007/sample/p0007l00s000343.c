#include <stdio.h>

int main(void) {
	int a,b,c;
	int n;
	int count;
	while(!feof(stdin)) {
		scanf("%d",&n);
		if(feof(stdin))break;
		count=0;
		for(a=0;a<=9;a++) {
			for(b=0;b<=9;b++) {
				for(c=0;c<=9;c++) {
					if(a+b+c>=n-9 && a+b+c<=n)count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}