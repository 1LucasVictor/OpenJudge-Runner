#include <stdio.h>
#include <stdlib.h>

int main(void){
	int x,k,last;
	int ans;
	char str[1000];
	
	fgets(str, sizeof(str), stdin);
	sscanf(str, "%d %d", &x, &k);
	
	while(x >= k){
		x = x - k;
	}
	
	last = abs(x - k);
	
	if(x >= last){
		ans = last;
	}else{
		ans = x;
	}
	
	printf("%d",ans);

	return 0;
}
