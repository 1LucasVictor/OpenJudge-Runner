#include <stdio.h>

int min(int z, int b){
	if(z < b) return z;
	return b;
}

int main (void){

	char  s[100000];
	int i, count = 0;
	int len = 0;
	scanf("%s", s);
	
	for(i = 0; s[i] != '\0'; i++){
		if(s[i] == '1'){
			count++;
		}
		len++;
	}

	printf("%d\n", min(count , len - count) * 2);


}