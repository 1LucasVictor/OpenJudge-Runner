#include <stdio.h>
#include <string.h>

int main(void)
{	
	int sum=0;
	int l, i;
	char s[1001];

	while(1){
		scanf("%s", s);
		if(s[0] == '0')
			break;
		l = strlen(s);
		for(i=0; i<l; i++){
			sum += s[i] - '0';
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}