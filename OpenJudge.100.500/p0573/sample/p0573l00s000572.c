#include <stdio.h>

int main(void){
	char in[5];
	scanf("%s", in);
	char a = in[0];
	char b = 0;
	for(int i = 0; i < 4; i++){
		if(a != in[i]){
			b = in[i];
			break;
		}
	}
	if(b == 0){
		printf("No\n");
		return 0;
	}
	int c1 = 0, c2 = 0;
	for(int i = 0; i < 4; i++){
		if(a == in[i])c1++;
		if(b == in[i])c2++;
	}
	if(c1 == 2 && c2 == 2)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
