#include <stdio.h>

int main(){
	int vida,atac,cont =0;
	scanf("%d %d",&vida ,&atac);

	if (vida % atac == 0)
		printf("%d\n", vida/atac);
	else
		printf("%d\n", vida/atac + 1);

	

	return 0;
}