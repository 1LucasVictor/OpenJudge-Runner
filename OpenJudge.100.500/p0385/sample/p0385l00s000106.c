#include <stdio.h>
int main(void) {
	int x,s;
	while(scanf("%d",&x)!=EOF && x!=0){
		for(s=0;x>0;x/=10){
			s+=x%10;
		}
		printf("%d\n",s);
	}
	return 0;
}