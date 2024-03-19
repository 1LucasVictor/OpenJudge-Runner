#include <stdio.h>

int main() {
	char str[20],stra[20];
	int i,c=0;
	scanf("%s",&str);
	while(1) {
		if (str[c]==NULL) {
			break;
		}
		c++;
	}
	for(i=0;i<c;i++) {
		stra[i]=str[c-1-i];
	}
	stra[c]='\0';
	printf("%s\n",stra);
	return 0;
}