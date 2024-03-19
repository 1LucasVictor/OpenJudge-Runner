#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int quon, sp = 0;

int main(void){
	int input, i;
	int total = 0, maxTotal = 0;
	scanf("%d %d", &input, &quon);
	int box[input], check[input];
	char tag[input][100];

	for(i = 0; i < input; i++){
		scanf("%s %d",tag[i], &box[i]);
		maxTotal += box[i];
		check[i] = 1;
	}

	while(1){
		if(quon >= box[sp] && check[sp]){
			total += box[sp];
			box[sp] = 0;
			check[sp] = 0;
			printf("%s %d\n",tag[sp], total);
			if(total >= maxTotal) break;
		} else {
			if(box[sp] > 0){
				box[sp] -= quon;
				total += quon;
			}
		}
		sp = (sp+1)%input;
	}

	return 0;
}