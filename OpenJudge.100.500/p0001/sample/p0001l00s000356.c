#include <stdio.h>

int main(void){
	int a,b,wa,answer;
	while(scanf("%d %d",&a,&b) != EOF){
		answer = 1;
		wa = a+b;
		while(wa/10 != 0){
			wa = wa/10;
			answer++;
		}
		printf("%d\n",answer);
	}
	return 0;
}