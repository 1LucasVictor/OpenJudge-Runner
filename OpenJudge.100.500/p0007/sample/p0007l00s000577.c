#include <stdio.h>


int main(){
	int n, a, b, c, count;
	while(scanf("%d", &n) != EOF){
		count = 0;
		for(a = 0; a <= 9; a++){
			if(a == n){
				count++;
				break;
			}
			if(n - a > 27) continue;
			for(b = 0; b <= 9; b++){
				if(a + b == n){
					count++;
					break;
				}
				if(n - (a + b) > 18) continue;
				for(c = 0; c <= 9; c++){
					if(a + b + c == n){
						count++;
						break;
					}
					if(n - (a + b + c) <= 9)	count++;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}