#include <stdio.h>
int main(){
	int x,y,tmp;
	
	scanf("%d %d",&x,&y);
	
	if(x<y){
	    tmp=x;
	    x=y;
	    y=tmp;
	}
	
	while(y>0){
		tmp=x%y;
		x=y;
		y=tmp;
	}
	
	printf("%d\n",x);
	
	return 0;
}
