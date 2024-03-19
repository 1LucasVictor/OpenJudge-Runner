#include <stdio.h>
#include <string.h>
char *repl(char *s,int a,int b,char *r){
	int i=0;
	for(;a<=b;a++,i++){
		s[a]=r[i];
	}
	return s;
}
char *rev(char *s,int a,int b){
	char t[1000]={};
	int i=0,j;
	for(j=b;j>=a;j--,i++){
		t[i]=s[j];
	}
	repl(s,a,b,t);
	return s;
}
void prt(char *s,int a,int b){
	for(;a<=b;a++){
		printf("%c",s[a]);
	}
	printf("\n");
	return;
}

int main(void) {
	char s[1000],r[1000],o[8];
	int q,a,b;
	scanf("%s",s);
	scanf("%d",&q);
	for(;q;q--){
		scanf("%s",o);
		if(!strcmp(o, "replace")){
			scanf("%d %d %s",&a,&b,r);
			repl(s,a,b,r);
		}else if(!strcmp(o, "reverse")){
			scanf("%d %d",&a,&b);
			rev(s,a,b);
		}else if(!strcmp(o, "print")){
			scanf("%d %d",&a,&b);
			prt(s,a,b);
		}
	}
	return 0;
}