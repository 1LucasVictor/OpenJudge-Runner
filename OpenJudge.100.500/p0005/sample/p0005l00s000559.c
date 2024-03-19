#include <stdio.h>
#include <string.h>

int main(){
	int i,l;
	char hoge[21];
	fgets(hoge,21,stdin);
	for(i=0,l=strlen(hoge)-1;i<l+1;i++)
		putc(hoge[l-i],stdout);
	puts("");
	
	return 0;
}