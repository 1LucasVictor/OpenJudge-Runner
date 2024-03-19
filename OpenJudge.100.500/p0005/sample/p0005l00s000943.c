#include<stdio.h>
#include<string.h>

main(i){
	char s[32];
	fgets(s,30,stdin);
	s[strlen(s)-1]='\0';
	for(i=strlen(s)-1;i>=0;i--)	putchar(s[i]);
	puts("");
	exit(0);
}