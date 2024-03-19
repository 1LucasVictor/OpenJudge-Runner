#include <stdio.h>

int main(void) {
	int n;
	int syakkinn=100000;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		syakkinn*=1.05;
		if(syakkinn%1000!=0)syakkinn+=1000;
		syakkinn-=syakkinn%1000;
	}
	printf("%d\n",syakkinn);
	return 0;
}