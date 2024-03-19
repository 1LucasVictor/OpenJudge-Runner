#include <stdio.h>

int main(void) {
	char moji[1201];
	int i=0;

	fgets(moji,1201,stdin);
	while(1){
		if(moji[i] >= 'A' && moji[i] <= 'Z'){
			moji[i] += 32;
		}else if(moji[i] >= 'a' && moji[i] <= 'z'){
			moji[i] -= 32;
		}else if(moji[i] == 0){
			break;
		}
		printf("%c",moji[i]);
		i++;
	}
	//printf("\n");
	return 0;
}
