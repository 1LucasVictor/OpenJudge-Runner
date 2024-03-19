#include <stdio.h>
#include <string.h>
int main(){
	char s[33];
	char t[33];
	int i;
	int l;
	int r;
	
	r = 0;
	scanf("%s", s);
	scanf("%s", t);
	l = strlen(s);
	
	for(i = 0; i < l; i++){
		if(s[i] != t[i]){
			r++;
		}
	}
	printf("%d\n", r);
	return 0;
}