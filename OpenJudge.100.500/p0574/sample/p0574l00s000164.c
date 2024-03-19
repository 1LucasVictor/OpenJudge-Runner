#include <stdio.h>

int main (){
	int i;
	char s[6];
	scanf("%s",s);
	for (i=0;i<3;i++){
		if(s[i]==s[i+1]){
			printf("Bad\n");
			return 0;
		}
	}
	printf("Good\n");
	return 0;
}