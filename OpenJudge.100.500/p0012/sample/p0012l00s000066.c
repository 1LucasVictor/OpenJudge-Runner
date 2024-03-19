#include<stdio.h>

int main(){
	int n, stackNum=0, stack[30];

	while(scanf("%d",&n)!=EOF){
		if(n==0){
			if(stackNum>0){
				printf("%d\n",stack[--stackNum]);
			}
		}
		else{
			stack[stackNum++] = n;
		}
	}
	return 0;
}