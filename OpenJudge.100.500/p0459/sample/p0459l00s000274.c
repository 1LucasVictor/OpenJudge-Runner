#include<stdio.h>
int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	int max=4*x;
	if(y>max){
		printf("No");
	}
	if(y<=max){
		if(y%2==0 || y%4==0 || (y%2==0 && y%4==0)){
			printf("Yes");
		}
		else{
			printf("No");
		}
	}
}