#include <stdio.h>
#include <string.h>

void print(char* str){
	int i, a,b;
	scanf("%d%d", &a, &b);
	for(i = a; b >= i; i++){
		printf("%c", str[i]);
	}
	printf("\n");
}
void reverse(char* str){
	char buf[1000];
	int a,b,i, c = 0;
	scanf("%d%d", &a, &b);
	for(i = a; b >= i; i++){
		buf[c] = str[i];
		c++;
	}
	c = 0;
	for(i = a; b >= i; i++){
		str[i] = buf[(b-a)-c];
		c++;
	}
}
void replace(char* str){
	char buf[1000];
	int a,b,i, c = 0;
	scanf("%d%d%s", &a, &b, buf);
	for(i = a; b >= i; i++){
		str[i] = buf[c];
		c++;
	}
}
int main(void) {
	char str[1000];
	int n, i;
	
	scanf("%s%d", str, &n);
	for(i = 0; n > i; i++){
		char me[8];
		scanf("%s", me);
		if(!strcmp(me, "print"))
			print(str);
		else if(!strcmp(me, "reverse"))
			reverse(str);
		else if(!strcmp(me, "replace"))
			replace(str);
	}
	
	return 0;
}