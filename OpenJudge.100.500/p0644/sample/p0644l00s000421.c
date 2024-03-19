#include <stdio.h>

int main(void)
{
	char s[3];
	int total=0;
	
	scanf("%s", s);
	
	for(int i=0; i<5; i++){
		if(s[i] == '1') total += 1;
	}
	
	printf("%d\n", total);
	return 0;
}