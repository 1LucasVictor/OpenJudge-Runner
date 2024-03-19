#include <stdio.h>

int main(void){
	int a[5];
	int k;
	for(int i = 0; i < 5; i++)
		scanf("%d", a + i);
	scanf("%d", &k);
	int chk = 0;
	for(int i = 0; i < 5; i++){
		for(int j = i + 1; j < 5; j++){
			if(a[j] - a[i] > k)chk = 1;
		}
	}
	if(chk)printf(":(\n");
	else printf("Yay!\n");
	return 0;
}
