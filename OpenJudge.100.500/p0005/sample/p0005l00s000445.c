#include<stdio.h>
	int str_count(const char s[]){
		int count=0;
		while(s[count])
		count++;
		return count;
	}
	
	int main(void){
		char str[20];
		int i;
		scanf("%s",str);
		for(i=str_count(str)-1;i>=0;i--){
			printf("%c",str[i]);
		}
		printf("\n");
		return 0;
}