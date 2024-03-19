#include <stdio.h>

int minnum(int a,int b){
	if(a > b)return b;
	else return a;
}

int main(void){
	int a,b,k;
	int res;
	int c=1;
	scanf("%d %d %d",&a ,&b ,&k);
	int min = minnum(a,b);
	for(int i=1;i<min;i++){
		if(a % i == 0 && b % i == 0){
			res = i;
			if(c == k){
				printf("%d\n",res);
				break;
			}
			c++;
		}
	}
	return 0;
}