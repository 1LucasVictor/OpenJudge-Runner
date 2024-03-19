#include<stdio.h>
int main(void)
{
	char s[5]="";
	int i=0;
	scanf("%s",s);
	
	
	
	if(s[0]==s[1]&&s[2]==s[3]){
		if(s[0]==s[2]&&s[0]==s[3])
		puts("No");
		else
		puts("Yes");
	}
	
	else if(s[0]==s[2]&&s[1]==s[3]){
		if(s[0]==s[1]&&s[0]==s[3])
		puts("No");
		else
		puts("Yes");
	}

	else if(s[0]==s[3]&&s[1]==s[2]){
		if(s[0]==s[1]&&s[0]==s[2])
		puts("No");
		else
		puts("Yes");
	}

	else
	puts("No");
	
	return 0;
}