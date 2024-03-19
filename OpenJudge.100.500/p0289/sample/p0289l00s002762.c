#include <stdio.h>
int main(){
	int x,y,r,a;
	scanf("%d%d",&x,&y);
	if(x<y){
		a=x;
		x=y;
		y=a;
	}
	r=x%y;
	while(r!=0){
		x=y;
		y=r;
		r=x%y;
	}
	printf("%d\n",y);
	return 0;
}

