#include <stdio.h>

int main(void){
	int n;
	int a,b,c,d;
	int counter;
	while(1){
		counter = 0;
		if(scanf("%d",&n) == EOF){break;}
		for(a = 0; a <= 9; a++){
			if(a >= n){
				if(a == n){counter++;}
				break;
			}
			for(b = 0; b <= 9; b++){
				if(a + b >= n){
					if(a + b == n){counter++;}
					break;
				}
				for(c = 0; c <= 9; c++){
					if(a + b + c >= n){
						if(a + b + c == n){counter++;}
						break;
					}
					for(d = 0; d <= 9; d++){
						if(a + b + c + d >= n){
							if(a + b + c + d == n){
								counter++;
							}
							break;
						}
					}
				}
			}
		}
		printf("%d\n",counter);
	}
	return 0;
}