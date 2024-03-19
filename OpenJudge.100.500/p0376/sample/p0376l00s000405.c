#include <stdio.h>

int main(void) {
	int x[100];
	int y,i;
	scanf("%d",&y);
	for(i=0;i<y;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<y;i++){
		if(i==y-1){
			printf("%d\n",x[y-i-1]);
			break;
		}
		printf("%d ",x[y-i-1]);
	}
	return 0;
}