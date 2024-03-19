#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define ll long long int
#define lim 100010
#define INF 1e9
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) ((x)<(y)?(y):(x))
#define ABS(x) ((x)>0?(x):-(x))

int main(void){
	char S[5];
	scanf("%s",S);
	char a=S[0],b=S[1],c=S[2],d=S[3];
	bool ok=false;
	if(a==b && c==d && a!=c)ok=true;
	if(a==c && b==d && a!=d)ok=true;
	if(a==d && b==c && a!=b)ok=true;
	if(ok)printf("Yes");
	else printf("No");
	return 0;
}