#include <stdio.h>

int main(){
	int x,y,i,j,tmp;
	scanf("%d %d",&x,&y);
	if(x<y){
		tmp = x;
		x = y;
		y = tmp;
	}
	while((tmp = x%y) !=0 ){
		x = y;
		y = tmp;
	}
	printf("%d\n",y);
	return 0;
}