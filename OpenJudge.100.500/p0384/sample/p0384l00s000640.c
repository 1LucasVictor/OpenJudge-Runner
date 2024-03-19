#include<stdio.h>

main()
{
	char buf[1000], *p = buf;
	
	
	scanf("%[^\n]",buf);
	
	while(*p != '\0'){
		if('A' <= *p && *p <= 'Z'){
			printf("%c",*p + ('a'-'A'));
		} else if('a'<=*p && *p <= 'z'){
			printf("%c",*p-('a'-'A'));
		} else {
			printf("%c",*p);
		}
		p++;
	}
	printf("\n");
	return 0;
}
	