#include<stdio.h>
#include<string.h>
int main()
{
	char s[4];
	int i,a,c=0,x=0;
	scanf("%s",s);
	a=strlen(s);
	for(i=0;i<a-1;i++){
		for(int j=i+1;j<a;j++){
			if(s[i]==s[j]) c++;
		}
	}
	if(c>=2) printf("Yes\n");
	else printf("No\n");
	return 0;
}
