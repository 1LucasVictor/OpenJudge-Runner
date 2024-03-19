#include<stdio.h>
int main(){
	int i;
	char s[1201];
	fgets(s,sizeof(s),stdin);
	for(i=0;s[i]!='\n';i++){
		if('a'<=s[i]&&s[i]<='z')printf("%c",s[i]-'a'+'A');
		else if('A'<=s[i]&&s[i]<='Z')printf("%c",s[i]+'a'-'A');
		else printf("%c",s[i]);
	}
	printf("\n");
	return 0;
}