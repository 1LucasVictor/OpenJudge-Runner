#include <stdio.h>
int main(void){
	int a,b,c,d,e,k;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
	if(	e-d>k || e-c>k || e-b>k || e-a>k||
		d-c>k || d-b>k || d-a>k ||
		c-b>k || c-a>k || b-a>k){
		printf(":(");
	}else{
		printf("Yay!");
	}
	return 0;
}