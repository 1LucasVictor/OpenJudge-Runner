#include <stdio.h>

int main(void) {
	char s[4];
	int i,j,c;
	c=0;
	scanf("%s",&s);
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		if(s[i]==s[j]){
			c++;
		}	
		}
		
	}
	if(c==8){
		printf("Yes");
	}else{
		printf("No");
	}
	// your code goes here
	return 0;
}