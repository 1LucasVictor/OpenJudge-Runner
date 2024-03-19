#include<stdio.h>
int main(void)
{
	char s[10];
	int i;
	scanf("%s",&s);
	for(i=0;i<3;i++){
		if(s[i]==s[i+1]){
			printf("Bad\n");
			return 0;
		}
	}
	printf("Good\n");
	return 0;
}