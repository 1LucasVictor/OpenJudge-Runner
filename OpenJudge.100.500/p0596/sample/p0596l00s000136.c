#include <stdio.h>
#include <stdlib.h>

int min(int a, int b){
	return a <= b ? a : b;
}

int main(){
	int i, O = 0, l = 0;
	char *S = (char *)malloc(sizeof(char) * 100001);
	scanf("%s", S);
	for(i = 0; S[i] != '\0'; i++){
		if(S[i] == '0'){
			O++;
		}
		else{
			l++;
		}
	}
	printf("%d\n", 2 * min(O, l));
	return 0;
}