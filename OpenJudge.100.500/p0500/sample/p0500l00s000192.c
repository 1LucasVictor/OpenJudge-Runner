#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

#define P 1000000007

int comp(const void *a, const void *b){return *(int*)a-*(int*)b;}

int main(void){
	char a[4]={};
	int n, m, i;
	scanf("%d%d", &n, &m);
	for(i=0; i<m; i++){
		int s;
		char c;
		scanf("%d %c", &s, &c);
		if(n!=1 && s==1 && c=='0'){
			puts("-1");
			return 0;
		}else if(a[s]==0){
			a[s]=c;
		}else if(a[s]!=c){
			puts("-1");
			return 0;
		}
	}
	if(n==1) putchar(a[1]==0?'0':a[1]);
	else putchar(a[1]==0?'1':a[1]);
	for(i=2; i<=n; i++){
		putchar(a[i]==0?'0':a[i]);
	}
	putchar(10);
}
