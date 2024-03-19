#include <stdio.h>

int main(){
	char bball[3];
	int i,x=0;
	
	scanf("%s",bball);
	
	for(i=0;i<3;i++){
		if(bball[i]=='1'){
			x++;
		}
	}
	printf("%d",x);
	return 0;
}