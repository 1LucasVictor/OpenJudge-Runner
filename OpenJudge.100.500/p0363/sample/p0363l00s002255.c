#include <stdio.h>
int main(void) {
	int i,j,tmp;
	int x[3];
	for(i=0;i<3;i++){
		scanf("%d",&x[i]);
	}
	for(j=2;j>0;j--){
		for(i=0;i<j;i++){
			if(x[i]>x[i+1]){
				tmp=x[i];
				x[i]=x[i+1];
				x[i+1]=tmp;
			}
		}
	}
	printf("%d %d %d\n",x[0],x[1],x[2]);
	return 0;
}
