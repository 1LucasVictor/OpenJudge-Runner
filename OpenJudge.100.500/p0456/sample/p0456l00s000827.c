#include <stdio.h>
#include <string.h>
int main()
{
	int cnt = 0;
	char s[200000], t[200000];
	scanf("%s", s);
	scanf("%s", t);
	for(int i = 0; i < strlen(s); i++){
		if(s[i] != t[i]){
			cnt++;
		}
	}

	printf("%d", cnt);
}
