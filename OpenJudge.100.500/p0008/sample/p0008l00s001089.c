#include<stdio.h>

int main(){
	int a, b = 1, i, j, k = 0, s = 0;
	while(scanf("%d", &a) != EOF){
		if(a < 2) printf("%d\n", 0);
		if(a == 2) printf("%d\n", 1);
		if(a == 3){
			printf("%d\n", 2);
		}else if(3 < a){
			for(i = 3; i <= a; i += 2){
				for(j = 2; j < i; j++){
					if(i % j == 0) k++;
				}
				if(k == 0) b++;
				if(i < a) k = 0;
			}
			printf("%d\n", b);
		}
		b = 1;
		k = 0;
		s++;
		if(s == 30) break;
	}
	return 0;
}