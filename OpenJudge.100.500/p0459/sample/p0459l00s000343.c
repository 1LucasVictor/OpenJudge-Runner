#include <stdio.h>
int main(){
	int x,y,flag = 0;
	scanf("%d %d\n", &x, &y);

	while(y !=1){
		if(y%2==0){
			y=y/2;
		}
		else{
			flag =1;
			break;
		}
	}

	if(flag==1){
		printf("No\n");
	}
	else{
		printf("Yes\n");
	}
}