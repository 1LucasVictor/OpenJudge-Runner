#include<stdio.h>
int main(void){
	int i,x,y,z;
	
	scanf("%d",&x);
	
	int v[x];
	
	y = (x-1)/2;
	z = x-1;
	for(i = 0;i < x;i++){
		scanf("%d",&v[i]);
	}
	
	for(i = z;i > -1;i--){
		printf("%d", v[i]);
		if ( i ) printf(" ");
	}
	
	printf("\n");

return 0;	
}