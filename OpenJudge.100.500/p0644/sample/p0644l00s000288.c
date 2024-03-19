#include <stdio.h>
int main(){
	char s[3];
	scanf("%s",s);
	int i,c = 0;
	for (i=0;i<3;i++){
		if(s[i] == '1'){
			c++;
		}
	}
	printf("%d\n",c);
	return 0;
}