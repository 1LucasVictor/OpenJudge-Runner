#include<stdio.h>
#include<stdlib.h>
int main(){
	char data[6];
	int stack[128];
	int k=0;
	while(scanf("%s",data)!=EOF){
		if(data[0]=='+'){
			k--;
			stack[k-1]=stack[k-1]+stack[k];
		}
		else if(data[0]=='-'){
			k--;
			stack[k-1]=stack[k-1]-stack[k];
		}
		else if(data[0]=='*'){
			k--;
			stack[k-1]=stack[k-1]*stack[k];
		}
		else{
			stack[k]=atoi(data);
			k++;
		}
	}
	printf("%d\n",stack[0]);
	return 0;
}