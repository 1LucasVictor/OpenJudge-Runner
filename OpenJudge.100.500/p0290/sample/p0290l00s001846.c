#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int n,cnt=0,i,j;
	long long int d;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%lld", &d);
		if (d == 2||d==3||d==5||d==7) cnt++;
		for (j = 3;j<=(int)sqrt((double)d) ; j+=2) {
			if (d%j == 0||d%2==0) break;
			if(j>=(int)sqrt((double)d)-1)	cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}