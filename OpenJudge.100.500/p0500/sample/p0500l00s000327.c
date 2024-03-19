#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {

	int n, m;

	scanf("%d %d", &n, &m);

	int tmp[3] = {10, 10, 10};
	int s[5];
	int c[5];

	for(int i = 0; i < m; i++) {
		scanf("%d %d", &s[i], &c[i]);
	}


	for(int i = 0; i < m; i++) {
		if( (tmp[s[i] -1]) == 10) {
			tmp[s[i] -1] = c[i];
		}
		else if( (tmp[s[i] -1]) == c[i]){
			continue;
		}
		else{
			printf("-1\n");
			return 0;
		}
	}

	if(tmp[0] == 10) {
		tmp[0] = 1;
	}

	for(int i = 0; i < n; i++) {
		if(tmp[i] == 10) {
			tmp[i] = 0;
		}
	}

	int ans = 0;
	if(n == 3) {
		if( tmp[0] == 0 ){
			printf("-1\n");
			return 0;
		}
		ans = tmp[0] * 100 + tmp[1] * 10 + tmp[2];
	} else if( n == 2) {
		if( tmp[0] == 0 ){
			printf("-1\n");
			return 0;
		}
		ans = tmp[0] * 10 + tmp[1];
	} else if( n == 1) {

		ans = tmp[0];
	}

	printf("%d", ans);

	return 0;

}