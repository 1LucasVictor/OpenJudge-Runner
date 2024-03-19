#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

int main(){
	char a,b,c;
	scanf("%c%c%c",&a,&b,&c);
	printf("%d",a-48+b-48+c-48);
}