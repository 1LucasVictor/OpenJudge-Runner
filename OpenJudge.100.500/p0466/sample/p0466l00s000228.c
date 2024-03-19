#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	int i,c,d,total=0;
	char s[10],a[11];
	scanf("%s",s);
	scanf("%s",a);
	c=strlen(s);
	d=strlen(a);
	if(d-c!=1)total++;
	for(i=0;i<c;i++){
		if(s[i]!=a[i])total++;
	}
	if(total==0)printf("Yes");
	else printf("No");
	return 0;
}