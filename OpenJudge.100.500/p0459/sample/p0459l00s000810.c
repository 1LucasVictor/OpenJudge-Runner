#include <stdio.h>
int main() {
 	int count = 0, x, y;
 	scanf("%d %d", &x, &y);

	for (int i = 0; i < y; i++) {
		for (int j = 0; j < y; j++) {
			if (i * 2 + j * 4 == y && i + j == x) {
				count += 1;
			}
		}
	}
  	
  	if (count >= 1) {
      	printf("Yes");
    }
  	else {
      	printf("No");
    }
  
  	return 0;
}