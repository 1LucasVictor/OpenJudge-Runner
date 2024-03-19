#include<stdio.h>
#include<string.h>
int main()
{
	char s[100001],t[100001];
	int a,b,c,i,j;
	scanf("%s %s",s,t);
	a=strlen(s);
	c=0;
	b=0;
	for(i=0;i<a;i++){
		c++;
	}
	for(i=0;i<a;i++){
		if(s[i]==t[i]) b++;
	}
	printf("%d\n",c-b);
	return 0;
}
