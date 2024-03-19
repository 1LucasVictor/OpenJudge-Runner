#include <stdio.h>
int main(){
	char *str;
	int d_len,i;
	d_len=0;
	scanf("%s",str);
	while(str[d_len]!='\0'){
		d_len++;
	}
	for(i=d_len-1;i>-1;i--)printf("%c",str[i]);
	return 0;
}