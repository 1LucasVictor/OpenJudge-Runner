#include <stdio.h>

int main(void){
	int x, y;
	scanf("%d %d", &x, &y);
	for(int t = 0; t <= x; t++){
		int k = x - t;
		if(t * 2 + k * 4 == y){
			printf("Yes\n");
			goto end;
		}
	}
	printf("No\n");
end:
	return 0;
}
