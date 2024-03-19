#include <stdio.h>

int main(void) {
	char s[4];
	int i,j,c;
	c=0;
	scanf("%s",&s);
	for(i=0;i<3;i++){
		j=i+1;
		if(s[i]==s[j]){
			c++;
		}
	}
	if(c>=1){
		printf("Bad");
	}else{
		printf("Good");
	}

		
	// your code goes here
	return 0;
}
