#include <stdio.h>
int main(){
	int i=0;
	char str1[42];
    scanf("%s",str1);
	while (str1[i]!='\0') {
		i++;
	}
	i--;
	while (i>=0) {
		putchar(str1[i]);
		i--;
	}
	puts("");
}