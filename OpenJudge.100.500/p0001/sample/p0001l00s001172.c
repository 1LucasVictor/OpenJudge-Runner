#include<stdio.h>

int main(void) {
	int i,j,k,n,m,s;
	while(scanf("%d %d",&n,&m) != EOF){
		k=1;
		s=n+m;
		if(s==0) k=0;
		while(s>=10) {
			s=s/10;
			k++;
		}
		printf("%d\n",k);
	}
	return 0;
}