#include <stdio.h>
#include <math.h>

int main(){
	double n, d, x, y;
	int cont = 0;
	scanf("%lf %lf", &n, &d);

    double dist;

	int xq, yq, soma;

	for(int i = 0; i < n; i++){
		scanf("%lf %lf", &x, &y);
		dist = sqrt(pow(x,2)+pow(y,2));

		if(dist <= d)
			cont += 1;
	}

	printf("%d\n", cont);

	return 0;


}
