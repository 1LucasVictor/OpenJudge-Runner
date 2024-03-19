#include<stdio.h>

int  main(){
	int x;
	scanf("%d",&x);
	for(int i=-40; i<=40; i++){
		if (x>=30){
			printf("Yes");
			break;
		}
		else{
			printf("No");
			break;
		}
	}
	return 0;
}
