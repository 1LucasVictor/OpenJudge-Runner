#include <stdio.h>

int main(void){
	char s[4] = "000";
	int r = 0, i = 0;
	
	scanf("%s", s);
	
	while(s[i] != 0){
		if(s[i] == '1')
			r++;
		i++;
	}
	
	printf("%d\n", r);
	
	return 0;
}