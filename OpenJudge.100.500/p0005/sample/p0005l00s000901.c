#include <stdio.h>

int main() {
	char str[21],stra[21];
	int i,c=0;
	scanf("%s",&str);
	while(1) {
		stra[c] = str[c];
		if (str[c]=='\0') {
			break;
		}
		c++;
	}
	for(i=0;i<c;i++) {
		str[i]=stra[c-1-i];
	}
	stra[c]='\0';
	printf("%s\n",str);
	return 0;
}