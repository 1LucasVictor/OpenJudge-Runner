#include <stdio.h>

int main(){
	int n,m,o,p;
	
	while(scanf("%d", &n) != EOF){
		p = 0;
		
		for( ; n > 1; n--){
			o = 0;
			
			for(m = n-1; m > 1; m--){
				if((n % m) == 0){
					break;
				}
				o++;
			}
			
			if(o == (n-2)){
				p++;
			}
		}
		
		printf("%d\n", p);
	}
	
	return 0;
}