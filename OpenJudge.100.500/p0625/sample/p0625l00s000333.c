#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d",&a,&b);
	c = a+b;
	if (c>16){
		printf(":(");
	}else if (a>8){
		printf(":(");
	}else if (b>8){
		printf(":(");
	}else{
		printf("Yay!");
	}
	return 0;
}