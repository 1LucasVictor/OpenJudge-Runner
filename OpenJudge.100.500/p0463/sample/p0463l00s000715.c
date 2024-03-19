#include<stdio.h>

int main(void)
{
	int i;
	char s[4], t[20];

	scanf("%s", &s);
	

	for (i = 0;s[i] != '\0';i++) {
		
		
	}
i--;
if(s[i]=='2'|| s[i] == '4'|| s[i] == '5'|| s[i] == '7'||s[i] == '9')
	printf("hon");
if(s[i] == '0' || s[i] == '1' || s[i] == '6' || s[i] == '8')
printf("pon");
if(s[i] == '3')
printf("bon");

	return 0;
}