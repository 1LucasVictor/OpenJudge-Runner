#include <stdio.h>
#include <string.h>

void reverse(char *);
void replace(char *);
void print(char *);

int main(){
	int q, i;
	char str[1000], tmp[20];
	
	scanf("%s%d", str, &q);
	
	for(i = 0; i < q; i++){
		scanf("%s", tmp);
		if(!strcmp(tmp, "print")) print(str);
		else if(!strcmp(tmp, "reverse")) reverse(str);
		else if(!strcmp(tmp, "replace")) replace(str);
	}
	
	return 0;
}

void reverse(char *str){
	int start, last, i, j;
	char tmp[1000];
	scanf("%d%d", &start, &last);
	strcpy(tmp, str);
	for(i = start, j = 0; i <= last; i++, j++){
		str[i] = tmp[last-j];
	}
}

void replace(char *str){
	int start, last, i;
	char word[1000], tmp[1000];
	scanf("%d%d%s", &start, &last, word);
	strncat(tmp, str, start);
	strcat(tmp, word);
	strcat(tmp, &str[last+1]);
	strcpy(str, tmp);
	tmp[0]='\0';
}

void print(char *str){
	int start, last, i;
	scanf("%d%d", &start, &last);
	//printf("%s\n", str);
	for(i = start; i <= last; i++) printf("%c", str[i]);
	printf("\n");
}