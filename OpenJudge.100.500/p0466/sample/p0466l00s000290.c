#include<stdio.h>
#include<string.h>
int main()
{
	char s[11],t[11];
	int a,b,c,i;
	scanf("%s %s",s,t);
	a=strlen(s);
	b=0;
	c=0;
	for(i=0;i<a;i++){
		b++;
		if(s[i]==t[i])
			c++;
	}
	if(b==c) printf("Yes\n");
	else printf("No\n");
	return 0;
}
