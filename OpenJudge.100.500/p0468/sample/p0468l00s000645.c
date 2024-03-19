#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define rep(i,k,n) for(int (i)=(k);(i)<(n);(i)++)
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
#define abs(a,b) (a)< 0 ?(a):-(a)
#define llong long long

int main(){
	char s[10]; scanf("%s",s);
	if( strcmp(s,"ABC")==0 ) printf("ARC");
	else printf("ABC");
	return 0;
}
