#include <stdio.h>

int main(){
	int n, i, j, cnt, prm;
	
	while(scanf("%d", &n) != EOF){
		prm = 0;
		
		for(i = 1; i <= n; i++){
			cnt = 0;
			
			for(j = 1; j <= i; j++) if(i % j == 0) cnt++;
			
			if(cnt == 2) prm++;
		}
		
		printf("%d\n", prm);
	}
	
	return 0;
}