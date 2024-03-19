#include<stdio.h>
int main()
{
	char c;
	while(scanf("%c",&c)!=EOF) {
		if ('A'<=c&&c<='Z') printf("%c",c-'A'+'a');
		else if ('a'<=c&&c<='z') printf("%c",c-'a'+'A');
		else printf("%c", c);
	}
	return 0;
}