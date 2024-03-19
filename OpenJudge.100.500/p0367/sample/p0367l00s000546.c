
#include <stdio.h>

int main(void) {

	int a,b,c,cnt;
		cnt = 0;
	scanf("%d" "%d" "%d", &a, &b, &c);
	for( a; a <= b; a++){
		if( c % a == 0){
			cnt = cnt + 1;
		}
	}
printf("%d\n", cnt);
	return 0;
}