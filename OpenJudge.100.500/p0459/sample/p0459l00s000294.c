#include<stdio.h>

int main(){
	int x,y;
	int i;
	int cnt=0;
	scanf("%d %d",&x,&y);
	
	for(i=0;i<=x;i++){
		if(2*i+4*(x-i)==y){
			cnt++;
		}
	}
	if(cnt!=0){
		printf("Yes");
	}
	else{
		printf("No");
	}
}