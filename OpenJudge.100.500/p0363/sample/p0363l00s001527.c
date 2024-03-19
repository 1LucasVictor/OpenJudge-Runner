#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i[3],k,j;
	scanf("%d",&i[0]);
	scanf("%d",&i[1]);
	scanf("%d",&i[2]);
	for(k=0; k<3; k++){
		for(j=1; j<3-k; j++){
			if(i[k]<i[k+j]){}
			else{
				int temp=i[k];
				i[k]=i[k+j];
				i[k+j]=temp;
			}
		}
	}
	printf("%d %d %d\n",i[0],i[1],i[2]);

	return EXIT_SUCCESS;
}