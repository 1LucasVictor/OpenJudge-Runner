#include <stdio.h>

int main(void)
{
	int len,n;
	char str[20]="";
	scanf("%s", &str);
	len=0;
	while (str[len]!='\0'){
		len++;
	}
	for (n=len-1;n>=0;n--){
		printf("%c", str[n]);
	}
        printf("\n");
	return 0;
}