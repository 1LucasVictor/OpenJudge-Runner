#include <stdio.h>

int main(void) {
	int x[100],i;
	
	scanf("%d",&i);
	for(int j=0;j<i;j++){
		scanf("%d",&x[j]);
	}
	i=i-1;
	for(i;i>0;i--){
		printf("%d ",x[i]);
	}
	printf("%d\n",x[i]);
	return 0;
}