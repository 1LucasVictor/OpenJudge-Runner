#include <stdio.h>
#include <string.h>

void print(void);
void reverse(void);
void replace(void);

char str[1000];
int a, b;

int main(){
	int i, q;
	char tmp[20];
	scanf("%s%d", str, &q);
	for(i=0; i<q; i++){
		scanf("%s%d%d", tmp, &a, &b);
		if(!strcmp(tmp, "print")) print();
		else if(!strcmp(tmp, "reverse")) reverse();
		else if(!strcmp(tmp, "replace")) replace();
	}	
	return 0;
}

void print(void){
	int i;
	for(i=a; i<=b; i++) printf("%c", str[i]);
	printf("\n");
}

void reverse(void){
	int i, j;
	char c;
	for(i=a, j=b; i<j; i++, j--){
		c = str[i];
		str[i] = str[j];
		str[j] = c;
	}
}

void replace(void){
	int i;
	char c;
	for(i=a; i<=b; i++){
		scanf(" %c", &c);
		str[i] = c;
	}
}