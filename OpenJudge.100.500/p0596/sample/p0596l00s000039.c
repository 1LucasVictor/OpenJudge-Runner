#include<stdio.h>


 
int main() {

	char s[100001];
	int i,cnt1=0,cnt0=0;

	scanf("%s", s);

	for (i = 0;s[i]!='\0' ; i++) {
		if (s[i] == '0')cnt0++;
		if (s[i] == '1')cnt1++;
	}
	printf("%d", (cnt1 < cnt0) ? cnt1*2 : cnt0*2);


	return 0;
}