#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//x numero de animais e y numero de pernas

int main(){
	int x, y, eq=0, eq2=0;
	scanf("%d %d", &x, &y);

	if (y%2!= 0)
		printf("No");
	else{
		eq= (y-2*x)/2;
		eq2= x-eq;
		if (eq2>= 0 && eq >= 0)
			printf("Yes");
		else 
			printf("No");
	}
	printf("\n");

	return 0;	
}