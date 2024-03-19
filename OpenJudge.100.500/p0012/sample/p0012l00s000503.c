#include <stdio.h>

int main(){
	int num,stack[10]={},p=0;
	while(scanf("%d",&num)!=EOF){
		if(num==0) printf("%d\n",stack[--p]);
		else stack[p++]=num;
	}
	return 0;
}