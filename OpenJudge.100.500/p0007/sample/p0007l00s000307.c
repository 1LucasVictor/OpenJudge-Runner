#include <stdio.h>

int main(){
	int in,out,a,b,c,d;
	
	while(scanf("%d", &in) != EOF){
		out = 0;
		
		for(a = 0; a < 10; a++){
			for(b = 0; b < 10; b++){
				for(c = 0; c < 10; c++){
					for(d = 0; d < 10; d++){
						if((a+b+c+d) == in){
							out++;
						}
					}
				}
			}
		}
		
		printf("%d\n", out);
	}
	
	return 0;
}