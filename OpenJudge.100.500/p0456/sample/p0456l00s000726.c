#include <stdio.h>

int main()
{
	int cnt = 0;
	char s[100000], t[100000];
	scanf("%s", &s);
	scanf("%s", &t);
	for(int i = 0; s[i] != '\0'; i++){
		if(s[i] != t[i]){
			cnt++;
		}
	}

	printf("%d", cnt);
}
