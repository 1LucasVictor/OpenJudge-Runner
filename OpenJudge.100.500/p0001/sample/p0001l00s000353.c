#include <stdio.h>

int digit(int x){
	int i=0,j=x;
	while(j>0){
		i++;
		j=j/10;
	}
	return i;
}

int main (){
	int x,y;
	while(scanf("%d %d",&x,&y)>0){
		printf("%d\n",digit(x+y));
	}
	return 0;
}