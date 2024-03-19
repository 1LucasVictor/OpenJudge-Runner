#include <stdio.h>

int main(){
	int n, i, j, cnt;
	
	while(scanf("%d", &n) != EOF){
		if(n == 0 || n == 1){
			cnt = 0;
		}else{
			cnt = 1;
			
			for(i = 3; i <= n; i += 2){
				for(j = 3; j < i && i % j != 0; j += 2);
				
				if(j == i) cnt++;
			}
		}
		
		printf("%d\n", cnt);
	}
	
	return 0;
}