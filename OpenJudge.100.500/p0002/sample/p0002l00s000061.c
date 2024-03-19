#include <stdio.h>
#include <stdlib.h>

struct triangle{
	int a, b, c;
	int jugde;
};

int main(){
	int n, i, c;
	struct triangle* dataset;

	scanf("%d", &n);

	dataset = (struct triangle*)malloc(sizeof(struct triangle) * n);

	for(i = 0; i < n; i++){
		scanf("%d %d %d", &((dataset+i)->a), &((dataset+i)->b), &((dataset+i)->c));
		if((dataset+i)->a < (dataset+i)->b){
			c = (dataset+i)->a;
			(dataset+i)->a = (dataset+i)->b;
			(dataset+i)->b = c;
		}
		if((dataset+i)->a < (dataset+i)->c){
			c = (dataset+i)->a;
			(dataset+i)->a = (dataset+i)->c;
			(dataset+i)->c = c;
		}
		if((dataset+i)->a*(dataset+i)->a == (dataset+i)->b*(dataset+i)->b + (dataset+i)->c*(dataset+i)->c) (dataset+i)->jugde = 1;
		else (dataset+i)->jugde = 0;
	}

	for(i = 0; i < n; i++){
		if((dataset+i)->jugde == 1) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}