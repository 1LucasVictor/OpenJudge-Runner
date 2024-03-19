#include<stdio.h>

int main(){
	int i, a = 0, b = 0, c = 0, amari = 0, cnt = 0;
	scanf("%d %d %d", &a, &b, &c);
	for(i = 1; i <= 10000; i++){
		if(a <= i && i <= b){
			if( (amari = c % i) == 0)  cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
