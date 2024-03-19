#include<stdio.h>
int pow_i(int x, int y){
	int n = 1;
	for(int i=0; i<y; i++){
		 n *= x;
	}
	return n;
}
int main(void){
	int x = 0;
	int n, m;
	int s, c;
	int flg = 1;
	scanf("%d", &n);
	scanf("%d", &m);
	for(int i=0; i<m; i++){
		scanf("%d", &s);
		scanf("%d", &c);
		if(s == 1 && c == 0 && n != 1){
			flg = 0;
		}
		else if(x/pow_i(10, n-s)-(x/pow_i(10, n-s+1))*10 == 0){
			x += pow_i(10, n-s)*c;
		}
		else if(x/pow_i(10, n-s)-(x/pow_i(10, n-s+1))*10 == c){
			//  do nothing
		}
		else{
			flg = 0;
		}
	}
	if(x-pow_i(10, n-1) < 0){
		x += pow_i(10, n-1);
	}
	if(flg == 0){
		x = -1;
	}
	printf("%d\n", x);
	return 0;
}