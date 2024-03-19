#include <stdio.h>


int main(){
	int a;
	int b;
	int c;
	scanf("%d %d %d", &a, &b, &c);

	int x[3] = {a, b, c};
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++){
			if (x[j]>x[j+1]){
				int temp = x[j + 1];
				x[j + 1] = x[j];
				x[j] = temp;
			}
		}
	}
	printf("%d %d %d\n", x[0], x[1], x[2]);

	return 0;
}
