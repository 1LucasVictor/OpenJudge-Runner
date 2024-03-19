#include<stdio.h>
int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	int max=4*x;
	if(y>=1 && y<=100 && x>=1 && x<=100){
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
}