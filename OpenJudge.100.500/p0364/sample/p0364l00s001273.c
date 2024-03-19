#include<stdio.h>
int main(){
	int W,H,x,y,z;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&z);
	if(W>=x+z&&H>=y+z){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
}	