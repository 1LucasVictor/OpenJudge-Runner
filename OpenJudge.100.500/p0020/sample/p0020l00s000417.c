// AOJ Volume 0 Problem 0021

#include <stdio.h>

void normalization(float *x1, float *y1, float *x2, float *y2)
{
	float t;
	
	if (*x1 > *x2){
		t = *x1;
		*x1 = *x2;
		*x2 = t;

		t = *y1;
		*y1 = *y2;
		*y2 = t;
	}
}

int main(void)
{
    int n;
	int i;
	float x1, y1, x2, y2, x3, y3, x4, y4;

	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
		scanf("%f%f%f%f", &x3, &y3, &x4, &y4);
	
		normalization(&x1, &y1, &x2, &y2);
		normalization(&x3, &y3, &x4, &y4);
	
		if (x1 == x2){
			if (x3 == x4 && x1 != x3){
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
			continue;
		}
		if (y1 == y2){
			if (y3 == y4 && y1 != y3){
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
			continue;
		}

//		printf("[%f][%f][%f][%f]", x1, y1, x2, y2);
//		printf("[%f][%f][%f][%f]", x3, y3, x4, y4);

//		printf("<%f><%f>", (y2 - y1) * (x3 - x4), (y4 - y3) * (x2 - x1));

		if ((y2 - y1) * (x4 - x3) == (y4 - y3) * (x2 - x1)){
			printf("YES\n");
			continue;
		}
		printf("NO\n");
	}

    return (0);
}