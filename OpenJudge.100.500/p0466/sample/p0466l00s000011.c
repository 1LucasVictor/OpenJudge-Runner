#include <stdio.h>
 
int main(void) {

	int i;
	char s[11], t[12];
	
	scanf("%s %s", s, t);

	for(i = 0; ; i++){
		if(t[i] == s[i]){
			continue;
		}
		else if(t[i] != s[i] && s[i] == '\0'){
			printf("Yes");
			break;
		}else{
			printf("No");
			break;
		}
	}

	return 0;
}