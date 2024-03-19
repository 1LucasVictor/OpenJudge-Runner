#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void){
	char input[1200];

	scanf("%[^\n]",input);

	//FILE *fp=fopen("output.txt","w");
	for(int i=0;i<strlen(input);i++){
		printf("%c",isupper(input[i])?tolower(input[i]):toupper(input[i]));
		//fprintf(fp,"%c",isupper(input[i])?tolower(input[i]):toupper(input[i]));
	}
	puts("");
	//fclose(fp);
	return 0;
}

