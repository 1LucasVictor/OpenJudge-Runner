#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)

int main() {
	int n = 0, x = 0, y = 0, d = 0;
	int anser = 0;
	double jug = 0,X = 0;

	scanf("%d %d",&n ,&d);

	for (int i = 0; i < n; i++) {
		jug = 0;
		scanf("%d %d", &x, &y);
		X = ((double)x * (double)x )+( (double)y * (double)y);
		jug = sqrt(X);
		if(jug <= (double)d){
			anser++;
		}
	}
	printf("%d", anser);

}