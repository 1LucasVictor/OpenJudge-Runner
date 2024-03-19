#include <stdio.h>
 
int main(void) {

	int a, b, c, k, i, ans = 0;
	
	scanf("%d %d %d %d", &a, &b, &c, &k);
	
	if(k < a)
		ans = k;
	if(k >= a){
		ans = a;
		k = k - a;
	}
	
	for(i = 0; i < k; i++){
		if(b > 0)
			b--;
		else if(c > 0){
			ans--;
			c--;
		}
	}
	
	printf("%d", ans);
			
	
	return 0;
}