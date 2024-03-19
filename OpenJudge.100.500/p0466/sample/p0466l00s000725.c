#include <stdio.h>
#include <string.h>

int main(void){
	char s[10], t[11];  
	
	scanf("%s", s);
	scanf("%s", t);
	
	int e = 0;
	for (int i = 0; i < strlen(s); i++){
		if (s[i] == t[i]) e++;
	}
	
	if (e == strlen(s)) printf("Yes");
	else printf("No");
	
	return 0;
}
