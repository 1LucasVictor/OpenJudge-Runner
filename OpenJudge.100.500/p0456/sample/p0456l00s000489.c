#include <stdio.h>
#include <string.h>
#define maxn 200000
char s[maxn],t[maxn];
int main(){
	int i,n,cnt=0;
	scanf("%s%s",s,t);
	n=strlen(s);
	for(i=0;i<n;i++)
		if(s[i]!=t[i])cnt++;
	printf("%d\n",cnt);
	return 0;
}