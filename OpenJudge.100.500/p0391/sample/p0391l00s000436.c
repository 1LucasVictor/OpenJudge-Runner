#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(char str[1024], int a, int b);
void reverse(char str[1024], int a, int b);
void replace(char str[1024], int a, int b, char p[1024]);

int main(void){
	char str[1024]={0};
	char p[1024]={0};
	char ch[24]={0};
	int q,i;
	int a,b;

	scanf("%s", str);
	scanf("%d", &q);
	for(i=0; i<q; i++){
		scanf("%s %d %d", ch, &a, &b);
		if(!strcmp(ch,"print"))
			print(str,a,b);
		else if(!strcmp(ch,"reverse"))
			reverse(str,a,b);
		else if(!strcmp(ch,"replace")){
			scanf("%s",p);
			replace(str,a,b,p);
		}
		
	}
	return 0;
}
void print(char str[1024], int a, int b){
	int i;
	for(i=a; i<=b; i++){
		printf("%c",str[i]);
	}
	printf("\n");
}
void reverse(char str[1024], int a, int b){
	int i,j;
	char str2[1024];

	strcpy(str2,str);
	for(i=a,j=b; i<=b && j>=a; i++, j--){
		str[i] = str2[j];
	}
}
void replace(char str[1024], int a, int b, char p[1024]){
	int i,j;
	for(i=a; i<=b; i++){
		str[i] = p[i-a];
	}
}