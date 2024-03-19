#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int i, j, len, isDestroy, cnt = 0;
	
	char s[100001];
	
	scanf("%s", &s);
	
	len = strlen(s);
	
	int a[len];
	
	do{
		isDestroy = 0;
		for(i = 0; i < len - 1; i++){
			if((s[i] == '0' && s[i + 1] == '1') || (s[i] == '1' && s[i + 1] == '0')){
				s[i] = '-';
				s[i + 1] = '-';
			}
		}
		for(i = 0; i < len; i++){
			if(s[i] == '-'){
				isDestroy = 1;
				len--;
				cnt++;
				for(j = i; j < len; j++){
					s[j] = s[j + 1];
				}
			}
		}
		
	}while(isDestroy);
	
	printf("%d", cnt);

	return 0;
}