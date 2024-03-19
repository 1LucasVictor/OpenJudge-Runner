#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define rep(i,k,n) for(int (i)=(k);(i)<(n);(i)++)
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
#define abs(a) (a)>0 ?(a):-(a)
#define llong long long

int main(){
	char s[20],t[20];
	scanf("%s %s",s,t);
	int k=0;
	while( s[k]!=0 ){
		if( s[k]!=t[k] ){
			printf("No");
			return 0;
		}
		k++;
	}
	printf("Yes");
	return 0;
}
