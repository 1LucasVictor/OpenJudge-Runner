#include <stdio.h>

int main(){
	int num, i;
	char number[1001];
	while(1){
		scanf("%s", number);
		if(number[0] == '0')break;
		i = 0;
		num = 0;
		while(1){
			if(number[i] == '\0')break;
			num += number[i] - '0';
			i++;
		}
		printf("%d\n", num);
	}
			return 0;
}