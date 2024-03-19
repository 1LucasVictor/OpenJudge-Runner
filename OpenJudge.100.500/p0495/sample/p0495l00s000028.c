#include<stdio.h>

int main(){
	char s[4];
	int a = 0, b = 0;
	int i;

	scanf("%s", s);

	for(i=0; i<3; i++){
		if(s[i] == 'A'){
			a = 1;
		}else{
			b = 1;
		}
	}

	printf("%s", ( a == 1 && b == 1) ? "Yes" : "No");

	return 0;
}
