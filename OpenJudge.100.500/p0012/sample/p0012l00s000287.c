#include<stdio.h>

int main(void){
	int temp;
	int box[10]={0};
	int i=0;
	scanf("%d", &box[i++]);
	
	while(scanf("%d", &temp) != EOF){
	if(temp==0) printf("%d\n", box[--i]);
	else box[i++]=temp;
	};

	return (0);
}