#include <stdio.h>
int main(){
	char s[5];
	scanf("%s",&s);
	getchar();
	
	if (s[0] != s[2]){
		printf("Yes");
}
	else if(s[1] != s[2]){
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	
	return 0;
	
	
}