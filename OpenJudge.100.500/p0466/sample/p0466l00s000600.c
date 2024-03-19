#include <stdio.h>
#include <string.h>

int main(void){
	char s[11], t[12], u[11];
	int i, x=0;
	
	scanf("%s", s);
	scanf("%s", t);
	
	for(i=0; s[i]!=0; i++){
		if(s[i] != t[i]){
			x=1;
			break;
		}
	}
	
	if(x == 1){
		printf("No");
	}else{
		printf("Yes");
	}
	
	return 0;
}