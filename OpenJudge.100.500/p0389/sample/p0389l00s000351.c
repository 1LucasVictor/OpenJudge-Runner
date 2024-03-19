#include <stdio.h>

int main(void){
	char cards[201];
	char tmp[10] = {0};
	char *cp;
	char *tp;
	cp = cards;
	tp = tmp;
	int m,h,i;
	int cnt = 0;
	int len = 0;

	while(1){
		scanf("%s", cards);

		if(cards[0] == '-'){
			break;
		}

		while(cards[len] != '\0'){
			len++;
		}

		scanf("%d", &m);

		cnt = 0;

		while(cnt != m){
			scanf("%d", &h);

			for(i = 0;i < h;i++){
				*(tp + i) = *(cp + i);
			}

			for(i = h;i < len;i++){
				*(cp + i - h) = *(cp + i);
			}

			for(i = 0;i < h;i++){
				*(cp + i + len - h) = *(tp + i);
			}

			cnt++;
		}
		puts(cards);
	}

	return 0;
}