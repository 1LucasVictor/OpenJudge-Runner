#include <stdio.h>
#include <stdlib.h>

int compare(int *a, int *b){
	return *a - *b;
}

int main(void){

	int Sides[3];

	int Num, i;
	scanf("%d", &Num);
	
	for(i = 0; i < Num; i++){
		scanf("%d %d %d", &Sides[0], &Sides[1], &Sides[2]);
		qsort(Sides,3,sizeof(int),(void *)compare);
	
		if(Sides[0]*Sides[0]+Sides[1]*Sides[1]==Sides[2]*Sides[2])
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}