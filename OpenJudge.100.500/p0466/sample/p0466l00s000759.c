#include<stdio.h>

int main(void){
	char s[11];
	char t[12];

	scanf("%s",s);
	scanf("%s",t);

	for(int i=0;s[i];i++) {
		if(s[i]!=t[i]) {
			printf("No");
			return 0;
		}
	}

	printf("Yes");
	return 0;
}
