#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int i, j, len, ptr, isDestroy, cnt = 0;
	
	char s[100001];
	
	scanf("%s", s);
	
	len = strlen(s);
	
	do{
		isDestroy = 0;
		
		for(i = 0; i < len - 1; i++){
			if(s[i] != s[i + 1]){
				isDestroy = 1;
				cnt += 2;
				s[i] = '-';
				s[i + 1] = '-';
			}
		}
		ptr = 0;
		for(i = 0; i < len; i++){
			if(s[i] != '-'){
				s[ptr] = s[i];
				ptr++;
			}
		}
		len = ptr;
		
	}while(isDestroy);
	
	printf("%d", cnt);

	return 0;
}