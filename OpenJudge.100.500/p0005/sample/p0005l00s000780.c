#include <stdio.h>

int main()
{
	char s[20], rs[20];
	int i;
	int num;

	scanf("%s", s);
	
	num = 0;
	while(s[num] != '\0') num++;

	for(i = 0; i < num + 1; i++){
		rs[i] = s[num - i - 1];
	}
	rs[i - 1] = '\0';
	printf("%s\n", rs);
}